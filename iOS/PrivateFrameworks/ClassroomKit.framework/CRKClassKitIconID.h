//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface CRKClassKitIconID : NSObject
{
    NSString *_mascotIdentifier;
    NSString *_colorIdentifier;
}

+ (id)stringBySanitizingString:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *colorIdentifier; // @synthesize colorIdentifier=_colorIdentifier;
@property(copy, nonatomic) NSString *mascotIdentifier; // @synthesize mascotIdentifier=_mascotIdentifier;
@property(readonly, copy, nonatomic) NSString *stringValue;
- (id)initWithMascotIdentifier:(id)arg1 colorIdentifier:(id)arg2;
- (id)init;
- (id)initWithIconID:(id)arg1;
- (id)initWithClass:(id)arg1;

@end
