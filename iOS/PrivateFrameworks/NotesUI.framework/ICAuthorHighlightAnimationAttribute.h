//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NotesUI/NSCopying-Protocol.h>

@class NSDate;

@interface ICAuthorHighlightAnimationAttribute : NSObject <NSCopying>
{
    _Bool _aboveExistingHighlights;
    _Bool _removedOnCompletion;
    NSDate *_startDate;
    double _duration;
    double _fromValue;
    double _toValue;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isRemovedOnCompletion) _Bool removedOnCompletion; // @synthesize removedOnCompletion=_removedOnCompletion;
@property(nonatomic, getter=isAboveExistingHighlights) _Bool aboveExistingHighlights; // @synthesize aboveExistingHighlights=_aboveExistingHighlights;
@property(nonatomic) double toValue; // @synthesize toValue=_toValue;
@property(nonatomic) double fromValue; // @synthesize fromValue=_fromValue;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (id)initWithStartDate:(id)arg1;

@end
