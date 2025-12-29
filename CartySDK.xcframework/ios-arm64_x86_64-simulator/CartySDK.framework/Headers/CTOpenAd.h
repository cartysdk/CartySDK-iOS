//
//  CTOpenAd.h
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@protocol CTOpenAdDelegate;

@interface CTOpenAd : NSObject

- (void)loadAd;
- (void)showAd;
- (void)showAd:(UIViewController *)rootViewController;
- (BOOL)isReady;

@property (nonatomic,assign)BOOL isMute;
@property (nonatomic,copy)NSString *placementid;
@property (nonatomic,weak)id <CTOpenAdDelegate> delegate;
@property (nonatomic,readonly)BOOL isLoading;
@end


@protocol CTOpenAdDelegate <NSObject>

- (void)CTOpenAdDidLoad:(CTOpenAd *)ad;
- (void)CTOpenAdLoadFail:(CTOpenAd *)ad withError:(NSError *)error;
- (void)CTOpenAdDidShow:(CTOpenAd *)ad;
- (void)CTOpenAdShowFail:(CTOpenAd *)ad withError:(NSError *)error;
- (void)CTOpenAdDidClick:(CTOpenAd *)ad;
- (void)CTOpenAdDidDismiss:(CTOpenAd *)ad;
@end

NS_ASSUME_NONNULL_END
