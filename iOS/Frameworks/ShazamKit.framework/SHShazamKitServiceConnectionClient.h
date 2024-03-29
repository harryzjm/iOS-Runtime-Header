//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol SHShazamKitClient;

__attribute__((visibility("hidden")))
@interface SHShazamKitServiceConnectionClient : NSObject
{
    id <SHShazamKitClient> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <SHShazamKitClient> delegate; // @synthesize delegate=_delegate;
- (void)didCalculateSpectralData:(id)arg1;
- (void)_libraryDidCompleteSync:(id)arg1;
- (void)_library:(id)arg1 didProduceError:(id)arg2 failedItemIdentifiers:(id)arg3;
- (void)_library:(id)arg1 didChangeWithSnapshot:(id)arg2;
- (void)_libraryWillBeginSync:(id)arg1;
- (void)matcher:(id)arg1 didProduceResponse:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

