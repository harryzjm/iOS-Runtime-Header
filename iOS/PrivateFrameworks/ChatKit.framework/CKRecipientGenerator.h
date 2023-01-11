//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface CKRecipientGenerator : NSObject
{
    NSArray *_searchABPropertyTypes;
}

+ (id)sharedRecipientGenerator;
@property(retain, nonatomic) NSArray *searchABPropertyTypes; // @synthesize searchABPropertyTypes=_searchABPropertyTypes;
- (void).cxx_destruct;
- (void)_appendSearchResults:(id)arg1 identifiers:(id)arg2 abPropertyType:(int)arg3 toArray:(id)arg4;
- (id)recipientWithAddress:(id)arg1;
- (id)recipientWithRecord:(void *)arg1 property:(int)arg2 identifier:(int)arg3;

@end

