/*
 * This header is generated by classdump-dyld 1.0
 * on Thursday, January 25, 2018 at 11:29:33 PM Eastern European Standard Time
 * Operating System: Version 11.1.2 (Build 15B202)
 * Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
 */

#import <ControlCenterUI/ControlCenterUI-Structs.h>
#import <ControlCenterUI/CCUIModularControlCenterViewController.h>
#import "CCUIModularControlCenterCardViewControllerDelegate.h"

@interface CCUIModularControlCenterCardViewController : CCUIModularControlCenterViewController

@property (nonatomic,readonly) UIEdgeInsets edgeInsets;
@property (nonatomic,weak) id<CCUIModularControlCenterCardViewControllerDelegate> delegate;
- (void)loadView;
- (UIEdgeInsets)edgeInsets;
- (NSInteger)_interfaceOrientation;
- (void)viewWillLayoutSubviews;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)willResignActive;
- (void)willBecomeActive;
- (id)obscuringBackgroundViewForModuleCollectionViewController:(id)arg1;
- (id)relevantSnapHeightsForOrientation:(NSInteger)arg1;
- (instancetype)initWithSystemAgent:(id)arg1;
- (CGRect)_statusLabelViewFrame;
- (NSUInteger)_statusTextAlignment;
@end
