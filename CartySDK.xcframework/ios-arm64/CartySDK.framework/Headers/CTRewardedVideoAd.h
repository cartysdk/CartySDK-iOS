//
//  CTRewardedVideoAd.h
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol CTRewardedVideoAdDelegate;

@interface CTRewardedVideoAd : NSObject

- (void)loadAd;
- (void)loadWithAdmString:(NSString *)adm;
- (void)showAd;
- (void)showAd:(UIViewController *)rootViewController;
- (BOOL)isReady;

@property (nonatomic,assign)BOOL isMute;
@property (nonatomic,readonly)NSString *requestid;
@property (nonatomic,copy)NSString *placementid;
@property (nonatomic,weak)id <CTRewardedVideoAdDelegate> delegate;
@property (nonatomic,readonly)BOOL isLoading;
@property (nonatomic,copy)NSString *customRewardString;

//client-side bidding
@property (nonatomic,readonly)double ecpm;
- (void)bidWin:(NSString *)secondPirce;
- (void)bidLoss:(NSString *)topPrice;
@end


@protocol CTRewardedVideoAdDelegate <NSObject>

- (void)CTRewardedVideoAdDidLoad:(CTRewardedVideoAd *)ad;
- (void)CTRewardedVideoAdLoadFail:(CTRewardedVideoAd *)ad withError:(NSError *)error;
- (void)CTRewardedVideoAdDidShow:(CTRewardedVideoAd *)ad;
- (void)CTRewardedVideoAdShowFail:(CTRewardedVideoAd *)ad withError:(NSError *)error;
- (void)CTRewardedVideoAdDidClick:(CTRewardedVideoAd *)ad;
- (void)CTRewardedVideoAdDidDismiss:(CTRewardedVideoAd *)ad;
- (void)CTRewardedVideoAdDidEarnReward:(CTRewardedVideoAd *)ad rewardInfo:(NSDictionary *)rewardInfo;
@end

NS_ASSUME_NONNULL_END
