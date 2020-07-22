//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <LinkPresentation/NSCopying-Protocol.h>

@class NSString, UIColor;

@interface LPVideoProperties : NSObject <NSCopying>
{
    _Bool _hasAudio;
    NSString *_accessibilityText;
    UIColor *__overlappingControlsColor;
}

@property(retain, nonatomic, setter=_setOverlappingControlsColor:) UIColor *_overlappingControlsColor; // @synthesize _overlappingControlsColor=__overlappingControlsColor;
@property(copy, nonatomic) NSString *accessibilityText; // @synthesize accessibilityText=_accessibilityText;
@property(nonatomic) _Bool hasAudio; // @synthesize hasAudio=_hasAudio;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

