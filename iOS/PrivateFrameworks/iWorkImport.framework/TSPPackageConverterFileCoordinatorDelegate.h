//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSPFileCoordinatorDelegate-Protocol.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface TSPPackageConverterFileCoordinatorDelegate : NSObject <TSPFileCoordinatorDelegate>
{
    NSURL *_URL;
}

- (void).cxx_destruct;
- (void)performReadUsingAccessor:(CDUnknownBlockType)arg1;
- (id)initWithURL:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

