//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary;

@interface WFRemoteContentItem
{
    NSDictionary *_serializedItem;
}

+ (id)itemWithSerializedItem:(id)arg1 forType:(id)arg2 named:(id)arg3 attributionSet:(id)arg4;
- (void).cxx_destruct;
@property(copy, nonatomic) NSDictionary *serializedItem; // @synthesize serializedItem=_serializedItem;
- (id)preferredFileType;
- (id)name;
- (id)metadataForSerialization;
- (id)initWithSerializedItem:(id)arg1 named:(id)arg2 attributionSet:(id)arg3;

@end
