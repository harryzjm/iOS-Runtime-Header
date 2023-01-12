//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppleAccount/NSCopying-Protocol.h>

@class NSString;

@interface AAMessagingDestination : NSObject <NSCopying>
{
    long long _destinationType;
    NSString *_destination;
    NSString *_destinationURI;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *destinationURI; // @synthesize destinationURI=_destinationURI;
@property(readonly, nonatomic) NSString *destination; // @synthesize destination=_destination;
@property(readonly, nonatomic) long long destinationType; // @synthesize destinationType=_destinationType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)isRegisteredToiMessageWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithHandle:(id)arg1;
- (id)initWithPhoneNumber:(id)arg1;
- (id)initWithEmail:(id)arg1;

@end
