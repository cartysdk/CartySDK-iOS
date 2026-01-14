//
//  CTExchange.h
//

#import <CartySDK/CTBannerAd.h>
#import <CartySDK/CTInterstitialAd.h>
#import <CartySDK/CTRewardedVideoAd.h>
#import <CartySDK/CTNativeAd.h>
#import <CartySDK/CTAppOpenAd.h>

typedef enum : NSUInteger {
    CTLogLevelAll        = 0,
    CTLogLevelTrace      = 10,
    CTLogLevelInfo       = 30,
    CTLogLevelOff        = 9999
} CTLogLevel;


NS_ASSUME_NONNULL_BEGIN

@interface CartyADSDK : NSObject

+ (NSString *)sdkVersion;

+ (CartyADSDK*)sharedInstance;

+ (void)setLogLevel:(CTLogLevel)level;

+ (NSString *)getBuyerUid;

- (void)start:(NSString *)appid completion:(void (^)(void))completion;

@property (nonatomic,strong)NSDictionary *globalCustomInfo;

- (void)setCustomInfo:(NSDictionary *)customInfo placementid:(NSString *)placementid;

- (void)setGDPRStatus:(BOOL)bo;

- (void)setDoNotSell:(BOOL)bo;

- (void)setCOPPAStatus:(BOOL)bo;

- (void)setLGPDStatus:(BOOL)bo;

@property (nonatomic,copy)NSString *userid;
@property (nonatomic,readonly)BOOL didStart;
@property (nonatomic,readonly)NSString *appid;
@end

NS_ASSUME_NONNULL_END
