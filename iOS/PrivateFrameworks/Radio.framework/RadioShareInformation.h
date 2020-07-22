//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Radio/NSCopying-Protocol.h>

@class NSString, NSURL, RadioArtworkCollection;

@interface RadioShareInformation : NSObject <NSCopying>
{
    RadioArtworkCollection *_artworkCollection;
    NSString *_messageMIMEType;
    NSString *_message;
    NSString *_subject;
    NSURL *_URL;
}

@property(readonly, retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, copy, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(readonly, copy, nonatomic) NSString *message; // @synthesize message=_message;
@property(readonly, copy, nonatomic) NSString *messageMIMEType; // @synthesize messageMIMEType=_messageMIMEType;
@property(readonly, copy, nonatomic) RadioArtworkCollection *artworkCollection; // @synthesize artworkCollection=_artworkCollection;
- (void).cxx_destruct;
- (id)_initWithShareInfoResponse:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

