//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;
@protocol OS_dispatch_data;

@interface TSPObjectSerializationDecoder : NSObject
{
    NSObject<OS_dispatch_data> *_encodedData;
    unsigned long long _encodedDataLength;
    NSMutableDictionary *_directory;
}

- (void).cxx_destruct;
- (id)newReadChannelForDataWithIdentifier:(long long)arg1 info:(id)arg2;
- (id)newReadChannelForRootObjectComponent;
- (id)newReadChannelForMetadata;
- (id)newReadChannelForLocator:(id)arg1;
- (id)initWithEncodedData:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

