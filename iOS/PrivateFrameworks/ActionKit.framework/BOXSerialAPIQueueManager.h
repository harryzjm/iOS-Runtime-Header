//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSOperationQueue;

@interface BOXSerialAPIQueueManager
{
    NSOperationQueue *_globalQueue;
}

@property(retain, nonatomic) NSOperationQueue *globalQueue; // @synthesize globalQueue=_globalQueue;
- (void).cxx_destruct;
- (_Bool)enqueueOperation:(id)arg1;
- (id)initWithSession:(id)arg1;
- (id)init;

@end
