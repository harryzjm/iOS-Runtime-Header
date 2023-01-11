//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Message/MFSearchResultHandler-Protocol.h>
#import <Message/QueryProgressMonitor-Protocol.h>

@class MFActivityMonitor;

@interface _MFBlockIterationHandler : NSObject <MFSearchResultHandler, QueryProgressMonitor>
{
    CDUnknownBlockType _block;
    _Bool _cancelled;
    MFActivityMonitor *_monitor;
}

- (void).cxx_destruct;
- (_Bool)shouldCancel;
- (_Bool)handleMessage:(id)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

@end
