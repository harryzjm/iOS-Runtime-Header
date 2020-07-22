//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <UIKit/NSCopying-Protocol.h>

@class CUINamedData, NSData, NSString;

@interface NSDataAsset : NSObject <NSCopying>
{
    CUINamedData *_namedData;
}

- (void).cxx_destruct;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) NSString *typeIdentifier;
@property(readonly, copy, nonatomic) NSData *data;
@property(readonly, copy, nonatomic) NSString *name;
- (id)initWithName:(id)arg1 bundle:(id)arg2;
- (id)initWithName:(id)arg1;
- (id)init;

@end

