//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BackBoardHIDEventFoundation/BKHIDEventProcessorRegistering-Protocol.h>

@class NSMutableDictionary, NSString;

@interface BKHIDEventProcessorRegistry : NSObject <BKHIDEventProcessorRegistering>
{
    NSMutableDictionary *_eventProcessorsByClassName;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)eventProcessorOfClass:(Class)arg1;
- (void)addEventProcessor:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
