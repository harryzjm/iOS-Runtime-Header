//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <ContactsFoundation/CNCancelable-Protocol.h>

@class NSString;
@protocol OS_dispatch_source;

@interface CNDispatchSource : NSObject <CNCancelable>
{
    NSObject<OS_dispatch_source> *_source;
}

- (void)cancel;
- (id)source;
- (void)finalize;
- (void)dealloc;
- (id)initWithSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
