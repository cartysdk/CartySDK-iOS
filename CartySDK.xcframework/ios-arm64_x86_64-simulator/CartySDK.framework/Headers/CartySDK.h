//
//  CTExchange.h
//

#import <CartySDK/CTBannerAd.h>
#import <CartySDK/CTInterstitialAd.h>
#import <CartySDK/CTRewardedVideoAd.h>
#import <CartySDK/CTNativeAd.h>
#import <CartySDK/CTAppOpenAd.h>

typedef enum : NSUInteger {
    CTLogAll        = 0,
    CTLogTrace      = 10,
    CTLogInfo       = 30,
    CTLogOff        = 9999
} CTLogLevel;


NS_ASSUME_NONNULL_BEGIN

@interface CartyADSDK : NSObject

+ (NSString *)sdkVersion;

+ (CartyADSDK*)sharedInstance;

+ (void)setLogLevel:(CTLogLevel)level;

+ (NSString *)getBuyerUid;

- (void)start:(NSString *)appid completion:(void (^)(void))completion;

//YES = 同意 ; NO = 不同意
- (void)setGDPRStatus:(BOOL)bo;
//YES = 售卖 ; NO = 不售卖
- (void)setCCPAStatus:(BOOL)bo;
//YES for a user who is under the age of 13 and falls under COPPA regulations;
//NO for a user known to be over the age of 13.
- (void)setCOPPAStatus:(BOOL)bo;
//YES = 同意 ; NO = 不同意
- (void)setLGPDStatus:(BOOL)bo;
//用户自定义参数
@property (nonatomic,strong)NSMutableDictionary *customInfo;
//开发者   自定义ID
@property (nonatomic,copy)NSString *userid;
@property (nonatomic,readonly)BOOL didStart;
@property (nonatomic,readonly)NSString *appid;
@end

NS_ASSUME_NONNULL_END
