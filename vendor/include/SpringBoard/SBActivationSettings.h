typedef NS_ENUM(NSUInteger, SBActivationSetting) {
	SBActivationSettingNotASetting = 0,
	SBActivationSettingNoAnimate = 3,
	SBActivationSettingAnimationDurationForOthersSuspension,
	SBActivationSettingSuspended,
	SBActivationSettingSEO,
	SBActivationSettingURL,
	SBActivationSettingEventOnly,
	SBActivationSettingAnimateWithoutPNG,
	SBActivationSettingAnimatePreviousWithoutPNG,
	SBActivationSettingPreferSceneSnapshots,
	SBActivationSettingAnimateLiveContentASAP,
	SBActivationSettingAnimationDelay,
	SBActivationSettingReverseAnimation,
	SBActivationSettingSourceIdentifier,
	SBActivationSettingAnnotation,
	SBActivationSettingLaunchOptions,
	SBActivationSettingLaunchImageName,
	SBActivationSettingUserLaunchEventTime,
	SBActivationSettingClassicOverride,
	SBActivationSettingAppLink,
	SBActivationSettingAppLinkState,
	SBActivationSettingEscapingAppLink,
	SBActivationSettingBreadcrumbSourceIdentifier,
	SBActivationSettingBreadcrumbNavigationAction,
	SBActivationSettingSpotlightVisible,
	SBActivationSettingTodayViewVisible,
	SBActivationSettingBannerLongLookVisible,
	SBActivationSettingProcessLaunchIntent,
	SBActivationSettingFromHomeScreen,
	SBActivationSettingFromLocked,
	SBActivationSettingFromContinuity,
	SBActivationSettingFromBanner,
	SBActivationSettingFromBulletinList,
	SBActivationSettingFromAssistant,
	SBActivationSettingFromStark,
	SBActivationSettingFromCC,
	SBActivationSettingFromIconWithLeafIdentifier,
	SBActivationSettingFromSpotlight,
	SBActivationSettingFromBreadcrumb,
	SBActivationSettingFromCommandTab,
	SBActivationSettingFromSystemServiceRequest,
	SBActivationSettingFromTrustedSystemServiceRequest,
	SBActivationSettingFromShortcutItem,
	SBActivationSettingFromWidget,
	SBActivationSettingFromNotificationContentExtension,
	SBActivationSettingAsNowPlaying,
	SBActivationSettingLaunchForegroundUnderLockScreen,
	SBActivationSettingIgnoringOcclusionsReason,
	SBActivationSettingSiriContinuityAppSuggestion,
	SBActivationSettingDontResetSwitchAppList,
	SBActivationSettingAnimateOthersSuspension,
	SBActivationSettingFromDeactivatingAlert,
	SBActivationSettingAnimationStartForOthersSuspension,
};

@interface SBActivationSettings : NSObject

- (id)objectForActivationSetting:(SBActivationSetting)activationSetting;
- (NSInteger)flagForActivationSetting:(SBActivationSetting)activationSetting;
- (BOOL)boolForActivationSetting:(SBActivationSetting)activationSetting;
- (void)setObject:(id)object forActivationSetting:(SBActivationSetting)activationSetting;
- (void)setFlag:(NSInteger)flag forActivationSetting:(SBActivationSetting)activationSetting;
- (void)setBool:(BOOL)value forActivationSetting:(SBActivationSetting)activationSetting;

- (NSString *)keyDescriptionForSetting:(SBActivationSetting)activationSetting;

@end
