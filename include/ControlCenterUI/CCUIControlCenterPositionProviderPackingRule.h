/*
 * This header is generated by classdump-dyld 1.0
 * on Thursday, January 25, 2018 at 11:29:33 PM Eastern European Standard Time
 * Operating System: Version 11.1.2 (Build 15B202)
 * Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
 * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
 */

#import <ControlCenterUI/ControlCenterUI-Structs.h>


@interface CCUIControlCenterPositionProviderPackingRule : NSObject <NSCopying> {

	NSUInteger _packFrom;
	NSUInteger _packingOrder;
	CCUILayoutSize _sizeLimit;

}

@property (nonatomic,readonly) NSUInteger packFrom;			//@synthesize packFrom=_packFrom - In the implementation block
@property (nonatomic,readonly) NSUInteger packingOrder;			//@synthesize packingOrder=_packingOrder - In the implementation block
@property (nonatomic,readonly) CCUILayoutSize sizeLimit;			//@synthesize sizeLimit=_sizeLimit - In the implementation block
- (id)copyWithZone:(NSZone*)arg1;
- (instancetype)initWithPackFrom:(NSUInteger)arg1 packingOrder:(NSUInteger)arg2 sizeLimit:(CCUILayoutSize)arg3;
- (NSUInteger)packFrom;
- (NSUInteger)packingOrder;
- (CCUILayoutSize)sizeLimit;
@end
