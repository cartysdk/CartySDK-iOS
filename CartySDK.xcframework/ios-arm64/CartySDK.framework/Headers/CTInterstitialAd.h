//
//  CTInterstitialAd.h
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol CTInterstitialAdDelegate;

@interface CTInterstitialAd : NSObject

- (void)loadAd;
- (void)loadWithAdmString:(NSString *)adm;
- (void)showAd;
- (void)showAd:(UIViewController *)rootViewController;
- (BOOL)isReady;

@property (nonatomic,assign)BOOL isMute;
@property (nonatomic,readonly)NSString *requestid;
@property (nonatomic,copy)NSString *placementid;
@property (nonatomic,weak)id <CTInterstitialAdDelegate> delegate;
@property (nonatomic,readonly)BOOL isLoading;

//USD
@property (nonatomic,assign)CGFloat bidfloor;
//client-side bidding
@property (nonatomic,readonly)double ecpm;
- (void)bidWin:(NSString *)secondPirce;
- (void)bidLoss:(NSString *)topPrice;
@end

@protocol CTInterstitialAdDelegate <NSObject>

- (void)CTInterstitialAdDidLoad:(CTInterstitialAd *)ad;
- (void)CTInterstitialAdLoadFail:(CTInterstitialAd *)ad withError:(NSError *)error;
- (void)CTInterstitialAdDidShow:(CTInterstitialAd *)ad;
- (void)CTInterstitialAdShowFail:(CTInterstitialAd *)ad withError:(NSError *)error;
- (void)CTInterstitialAdDidClick:(CTInterstitialAd *)ad;
- (void)CTInterstitialAdDidDismiss:(CTInterstitialAd *)ad;
@end

NS_ASSUME_NONNULL_END
