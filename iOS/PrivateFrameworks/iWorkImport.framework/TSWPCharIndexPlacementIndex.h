//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class TSWPDrawableAttachment;

__attribute__((visibility("hidden")))
@interface TSWPCharIndexPlacementIndex : NSObject
{
    int _placementIndex;
    unsigned long long _charIndex;
    TSWPDrawableAttachment *_drawableAttachment;
}

@property(retain, nonatomic) TSWPDrawableAttachment *drawableAttachment; // @synthesize drawableAttachment=_drawableAttachment;
@property(nonatomic) int placementIndex; // @synthesize placementIndex=_placementIndex;
@property(nonatomic) unsigned long long charIndex; // @synthesize charIndex=_charIndex;
- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)initWithCharIndex:(unsigned long long)arg1 placmentIndex:(int)arg2 drawableAttachment:(id)arg3;

@end
