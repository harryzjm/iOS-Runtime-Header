//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSAttributedString, NSString;

@interface IMMessagePartDescriptor : NSObject
{
    unsigned long long _messagePartIndex;
    NSAttributedString *_messagePartBody;
    NSString *_transferGUID;
    NSArray *_links;
    NSArray *_mapLocations;
    struct _NSRange _messagePartRange;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *mapLocations; // @synthesize mapLocations=_mapLocations;
@property(readonly, nonatomic) NSArray *links; // @synthesize links=_links;
@property(readonly, copy, nonatomic) NSString *transferGUID; // @synthesize transferGUID=_transferGUID;
@property(readonly, copy, nonatomic) NSAttributedString *messagePartBody; // @synthesize messagePartBody=_messagePartBody;
@property(readonly, nonatomic) struct _NSRange messagePartRange; // @synthesize messagePartRange=_messagePartRange;
@property(readonly, nonatomic) unsigned long long messagePartIndex; // @synthesize messagePartIndex=_messagePartIndex;
- (id)messagePartGUIDForMessageGUID:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)initWithMessagePartBody:(id)arg1 messagePartIndex:(unsigned long long)arg2 messagePartRange:(struct _NSRange)arg3 transferGUID:(id)arg4 links:(id)arg5 mapLocations:(id)arg6;

@end
