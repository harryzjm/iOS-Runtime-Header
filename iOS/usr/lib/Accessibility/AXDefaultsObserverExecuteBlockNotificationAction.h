//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <Accessibility/AXDefaultsObserverAction-Protocol.h>

@class NSString;

@interface AXDefaultsObserverExecuteBlockNotificationAction : NSObject <AXDefaultsObserverAction>
{
    CDUnknownBlockType _block;
}

@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
- (void).cxx_destruct;
- (void)performForChangedDefault:(id)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
