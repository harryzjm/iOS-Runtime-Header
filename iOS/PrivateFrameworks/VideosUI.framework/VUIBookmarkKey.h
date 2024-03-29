//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VUIBookmarkKey : NSObject
{
    NSString *_identifier;
    long long _keyType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long keyType; // @synthesize keyType=_keyType;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)description;
- (id)init;
- (id)initWithIdentifier:(id)arg1 keyType:(long long)arg2;

@end

