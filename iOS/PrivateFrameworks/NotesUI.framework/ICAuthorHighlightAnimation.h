//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSNumber;

@interface ICAuthorHighlightAnimation : NSObject
{
    _Bool _aboveExistingHighlights;
    _Bool _removedOnCompletion;
    NSNumber *_duration;
    NSNumber *_fromValue;
    NSNumber *_toValue;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isRemovedOnCompletion) _Bool removedOnCompletion; // @synthesize removedOnCompletion=_removedOnCompletion;
@property(nonatomic, getter=isAboveExistingHighlights) _Bool aboveExistingHighlights; // @synthesize aboveExistingHighlights=_aboveExistingHighlights;
@property(copy, nonatomic) NSNumber *toValue; // @synthesize toValue=_toValue;
@property(copy, nonatomic) NSNumber *fromValue; // @synthesize fromValue=_fromValue;
@property(copy, nonatomic) NSNumber *duration; // @synthesize duration=_duration;
- (_Bool)isEqual:(id)arg1;
- (id)description;

@end
