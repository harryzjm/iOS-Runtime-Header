//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class _UIStatesFeedbackGenerator;

@interface _UITapticEngine : NSObject
{
    _Bool _feedbackActivated;
    _UIStatesFeedbackGenerator *_feedbackGenerator;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool feedbackActivated; // @synthesize feedbackActivated=_feedbackActivated;
@property(retain, nonatomic) _UIStatesFeedbackGenerator *feedbackGenerator; // @synthesize feedbackGenerator=_feedbackGenerator;
- (id)_stateForFeedback:(long long)arg1;
- (void)actuateFeedback:(long long)arg1;
- (void)endUsingFeedback:(long long)arg1;
- (void)prepareUsingFeedback:(long long)arg1;
- (id)init;

@end
