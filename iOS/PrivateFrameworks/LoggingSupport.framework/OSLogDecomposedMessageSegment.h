//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, OSLogDeserializedEventMessageArgument, OSLogDeserializedMessagePlaceholder;

__attribute__((visibility("hidden")))
@interface OSLogDecomposedMessageSegment : NSObject
{
    NSDictionary *_backingDict;
    NSString *_literalPrefix;
    OSLogDeserializedMessagePlaceholder *_placeholder;
    OSLogDeserializedEventMessageArgument *_argument;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) OSLogDeserializedEventMessageArgument *argument; // @synthesize argument=_argument;
@property(readonly, nonatomic) OSLogDeserializedMessagePlaceholder *placeholder; // @synthesize placeholder=_placeholder;
@property(readonly, nonatomic) NSString *literalPrefix; // @synthesize literalPrefix=_literalPrefix;
@property(readonly, nonatomic) NSDictionary *backingDict; // @synthesize backingDict=_backingDict;
- (id)initWithDict:(id)arg1 metadata:(id)arg2;

@end

