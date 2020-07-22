//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaSocial/NSCopying-Protocol.h>

@class NSString;

@interface MSCLSocialService : NSObject <NSCopying>
{
    NSString *_identifier;
    long long _maximumNumberOfCharacters;
    NSString *_storeItemIdentifier;
}

@property(copy, nonatomic) NSString *storeItemIdentifier; // @synthesize storeItemIdentifier=_storeItemIdentifier;
@property(nonatomic) long long maximumNumberOfCharacters; // @synthesize maximumNumberOfCharacters=_maximumNumberOfCharacters;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithServiceDictionary:(id)arg1;

@end
