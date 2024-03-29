//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class COIDSMessage, NSString;

__attribute__((visibility("hidden")))
@interface COOnDemandIDSNodeCreationRequest : NSObject
{
    COIDSMessage *_message;
    NSString *_idsIdentifier;
    NSString *_fromURIToken;
    NSString *_requestIdentifier;
    NSString *_responseIdentifier;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *responseIdentifier; // @synthesize responseIdentifier=_responseIdentifier;
@property(readonly, nonatomic) NSString *requestIdentifier; // @synthesize requestIdentifier=_requestIdentifier;
@property(readonly, nonatomic) NSString *fromURIToken; // @synthesize fromURIToken=_fromURIToken;
@property(readonly, nonatomic) NSString *idsIdentifier; // @synthesize idsIdentifier=_idsIdentifier;
@property(readonly, nonatomic) COIDSMessage *message; // @synthesize message=_message;
- (id)initWithMessage:(id)arg1 idsIdentifier:(id)arg2 uriToken:(id)arg3 requestIdentifier:(id)arg4 responseIdentifier:(id)arg5;

@end

