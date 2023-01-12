//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <iTunesCloud/NSCopying-Protocol.h>

@class ICLiveLinkIdentity, NSString;

@interface ICSharedListeningItem : NSObject <NSCopying>
{
    NSString *_identifier;
    NSString *_mediaIdentifier;
    ICLiveLinkIdentity *_contributorIdentity;
}

+ (id)itemWithMediaIdentifier:(id)arg1;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) ICLiveLinkIdentity *contributorIdentity; // @synthesize contributorIdentity=_contributorIdentity;
@property(readonly, copy, nonatomic) NSString *mediaIdentifier; // @synthesize mediaIdentifier=_mediaIdentifier;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithProtobuf:(id)arg1 identity:(id)arg2;

@end
