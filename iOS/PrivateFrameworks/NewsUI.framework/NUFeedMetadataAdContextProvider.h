//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NewsUI/NUAdContextProvider-Protocol.h>

@class FCFeedDescriptor, NSString;

@interface NUFeedMetadataAdContextProvider : NSObject <NUAdContextProvider>
{
    FCFeedDescriptor *_feedDescriptor;
}

@property(readonly, nonatomic) FCFeedDescriptor *feedDescriptor; // @synthesize feedDescriptor=_feedDescriptor;
- (void).cxx_destruct;
- (id)adContextValueForKeyPath:(id)arg1;
- (id)initWithFeedDescriptor:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
