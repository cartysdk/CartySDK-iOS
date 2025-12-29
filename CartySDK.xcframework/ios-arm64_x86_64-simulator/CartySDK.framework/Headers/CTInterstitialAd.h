//
//  CTInterstitialAd.h
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol CTInterstitialAdDelegate;

@interface CTInterstitialAd : NSObject

- (void)loadAd;
- (void)showAd;
- (void)showAd:(UIViewController *)rootViewController;
- (BOOL)isReady;

@property (nonatomic,assign)BOOL isMute;
@property (nonatomic,copy)NSString *placementid;
@property (nonatomic,weak)id <CTInterstitialAdDelegate> delegate;
@property (nonatomic,readonly)BOOL isLoading;
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
