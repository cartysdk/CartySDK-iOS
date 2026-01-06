//
//  CTOpenAd.h
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol CTAppOpenAdDelegate;

@interface CTAppOpenAd : NSObject

- (void)loadAd;
- (void)showAd;
- (void)showAd:(UIViewController *)rootViewController;
- (BOOL)isReady;

@property (nonatomic,assign)BOOL isMute;
@property (nonatomic,copy)NSString *placementid;
@property (nonatomic,weak)id <CTAppOpenAdDelegate> delegate;
@property (nonatomic,readonly)BOOL isLoading;
@end


@protocol CTAppOpenAdDelegate <NSObject>

- (void)CTOpenAdDidLoad:(CTAppOpenAd *)ad;
- (void)CTOpenAdLoadFail:(CTAppOpenAd *)ad withError:(NSError *)error;
- (void)CTOpenAdDidShow:(CTAppOpenAd *)ad;
- (void)CTOpenAdShowFail:(CTAppOpenAd *)ad withError:(NSError *)error;
- (void)CTOpenAdDidClick:(CTAppOpenAd *)ad;
- (void)CTOpenAdDidDismiss:(CTAppOpenAd *)ad;
@end

NS_ASSUME_NONNULL_END
