//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iWorkImport/GQDNameMappable-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface GQDWPPageMaster : NSObject <GQDNameMappable>
{
    struct __CFString *mHeaderIdentifier;
    struct __CFString *mFooterIdentifier;
}

+ (const struct StateSpec *)stateForReading;
- (struct __CFString *)footerIdentifier;
- (struct __CFString *)headerIdentifier;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

