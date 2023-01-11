//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CarPlay/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface CPListSection : NSObject <NSSecureCoding>
{
    NSString *_header;
    NSString *_sectionIndexTitle;
    NSArray *_items;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, copy, nonatomic) NSString *sectionIndexTitle; // @synthesize sectionIndexTitle=_sectionIndexTitle;
@property(readonly, copy, nonatomic) NSString *header; // @synthesize header=_header;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)itemAtIndex:(long long)arg1;
- (long long)numberOfItems;
- (id)initWithItems:(id)arg1;
- (id)initWithItems:(id)arg1 header:(id)arg2 sectionIndexTitle:(id)arg3;

@end

