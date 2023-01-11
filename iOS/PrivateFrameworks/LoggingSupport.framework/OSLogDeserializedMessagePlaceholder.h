//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, _OSLogEventSerializationMetadata;

__attribute__((visibility("hidden")))
@interface OSLogDeserializedMessagePlaceholder
{
    NSDictionary *_backingDict;
    _OSLogEventSerializationMetadata *_metadata;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) _OSLogEventSerializationMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, nonatomic) NSDictionary *backingDict; // @synthesize backingDict=_backingDict;
- (id)type;
- (id)typeNamespace;
- (id)rawString;
- (id)tokens;
- (int)precision;
- (int)width;
- (id)initWithDict:(id)arg1 metadata:(id)arg2;

@end
