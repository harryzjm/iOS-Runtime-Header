//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface RMStatusPublisherDescription : NSObject
{
    NSArray *_keyPaths;
    NSString *_principalClassName;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *principalClassName; // @synthesize principalClassName=_principalClassName;
@property(readonly, copy, nonatomic) NSArray *keyPaths; // @synthesize keyPaths=_keyPaths;
- (id)initWithKeyPaths:(id)arg1 principalClassName:(id)arg2;
- (id)initWithDictionary:(id)arg1;

@end
