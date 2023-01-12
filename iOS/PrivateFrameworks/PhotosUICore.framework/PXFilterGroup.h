//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCopying-Protocol.h>

@class NSArray, NSString;

@interface PXFilterGroup : NSObject <NSCopying>
{
    NSString *_name;
    NSArray *_filterIdentifiers;
}

+ (id)groupWithName:(id)arg1 filterIdentifiers:(id)arg2;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *filterIdentifiers; // @synthesize filterIdentifiers=_filterIdentifiers;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithName:(id)arg1 filterIdentifiers:(id)arg2;
- (id)init;

@end
