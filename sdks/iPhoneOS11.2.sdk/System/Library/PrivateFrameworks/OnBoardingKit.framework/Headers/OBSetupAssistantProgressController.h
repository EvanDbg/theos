//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OnBoardingKit/OBWelcomeController.h>

@class UILabel, UIProgressView;

@interface OBSetupAssistantProgressController : OBWelcomeController
{
    UIProgressView *_progressBar;
    UILabel *_progressLabel;
}

@property(retain, nonatomic) UILabel *progressLabel; // @synthesize progressLabel=_progressLabel;
@property(retain, nonatomic) UIProgressView *progressBar; // @synthesize progressBar=_progressBar;
// - (void).cxx_destruct;
- (id)_progressFont;
- (void)setProgress:(double)arg1;
- (void)setProgressText:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (id)initWithTitle:(id)arg1;

@end

