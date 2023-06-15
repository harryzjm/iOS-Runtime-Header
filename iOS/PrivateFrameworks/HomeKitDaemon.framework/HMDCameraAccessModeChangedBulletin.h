//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class NSDate, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface HMDCameraAccessModeChangedBulletin : HMFObject
{
    _Bool _timeSensitive;
    NSString *_title;
    NSString *_body;
    NSString *_threadIdentifier;
    NSDate *_dateOfOccurrence;
    NSDictionary *_userInfo;
}

+ (id)localizedMessageForCameraAccessModeChange:(unsigned long long)arg1 changeReason:(long long)arg2 camera:(id)arg3;
- (void).cxx_destruct;
@property(readonly, getter=isTimeSensitive) _Bool timeSensitive; // @synthesize timeSensitive=_timeSensitive;
@property(readonly, copy) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(readonly, copy) NSDate *dateOfOccurrence; // @synthesize dateOfOccurrence=_dateOfOccurrence;
@property(readonly, copy) NSString *threadIdentifier; // @synthesize threadIdentifier=_threadIdentifier;
@property(readonly, copy) NSString *body; // @synthesize body=_body;
@property(readonly, copy) NSString *title; // @synthesize title=_title;
- (id)attributeDescriptions;
- (id)initWithAccessMode:(unsigned long long)arg1 camera:(id)arg2 home:(id)arg3 changeReason:(long long)arg4 changeDate:(id)arg5;
- (id)initWithTitle:(id)arg1 body:(id)arg2 threadIdentifier:(id)arg3 dateOfOccurrence:(id)arg4 userInfo:(id)arg5 isTimeSensitive:(_Bool)arg6;

@end

