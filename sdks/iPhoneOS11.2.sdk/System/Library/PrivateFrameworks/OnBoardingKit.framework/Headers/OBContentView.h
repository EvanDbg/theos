//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Dec  5 2019 09:59:31).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class UIColor;

__attribute__((visibility("hidden")))
@interface OBContentView : UIView
{
    BOOL _aboveHeaderLayout;
    BOOL _customizedBackgroundColor;
    UIView *_bleedView;
    UIColor *_lightColor;
    UIColor *_darkColor;
}

@property(nonatomic) BOOL customizedBackgroundColor; // @synthesize customizedBackgroundColor=_customizedBackgroundColor;
@property(nonatomic) BOOL aboveHeaderLayout; // @synthesize aboveHeaderLayout=_aboveHeaderLayout;
@property(retain, nonatomic) UIColor *darkColor; // @synthesize darkColor=_darkColor;
@property(retain, nonatomic) UIColor *lightColor; // @synthesize lightColor=_lightColor;
@property(nonatomic) __weak UIView *bleedView; // @synthesize bleedView=_bleedView;
// - (void).cxx_destruct;
- (BOOL)_colorIsDefault:(id)arg1;
- (id)_defaultColorForCurrentTraitCollection;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(CGRect)arg1;
- (id)initWithFrame:(CGRect)arg1 aboveHeaderLayout:(BOOL)arg2;

@end

