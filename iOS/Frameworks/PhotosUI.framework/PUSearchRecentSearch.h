//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PhotosUI/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface PUSearchRecentSearch : NSObject <NSSecureCoding>
{
    NSArray *_representedObjects;
}

+ (id)new;
+ (_Bool)supportsSecureCoding;
+ (_Bool)_isSupportedRepresentedObjects:(id)arg1;
@property(readonly, nonatomic) NSArray *representedObjects; // @synthesize representedObjects=_representedObjects;
- (void).cxx_destruct;
- (id)init;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
@property(readonly, nonatomic) NSString *title;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)initWithRepresentedObjects:(id)arg1;

@end

