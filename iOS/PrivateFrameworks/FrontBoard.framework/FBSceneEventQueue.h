//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <FrontBoardServices/BSEventQueue.h>

@protocol FBSceneEventQueueDelegate;

__attribute__((visibility("hidden")))
@interface FBSceneEventQueue : BSEventQueue
{
    id <FBSceneEventQueueDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FBSceneEventQueueDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_noteWillExecuteEvent:(id)arg1;
- (void)_noteWillPendEvents:(id)arg1 atPosition:(int)arg2;
- (void)_noteQueueDidDrain;
- (void)_noteQueueDidUnlock;

@end

