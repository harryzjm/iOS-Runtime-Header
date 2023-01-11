//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol NSCopying;

@interface PKPassPresentationContext : NSObject
{
    _Bool _animated;
    _Bool _fieldDetect;
    _Bool _postPayment;
    _Bool _persistentCardEmulation;
    _Bool _wasAutomaticallySelected;
    NSArray *_additionalPassUniqueIdentifiers;
    id <NSCopying> _userInfo;
}

+ (id)contextWithAnimation:(_Bool)arg1 wasAutomaticallySelected:(_Bool)arg2 additionalPassUniqueIdentifiers:(id)arg3 userInfo:(id)arg4;
+ (id)contextWithAnimation:(_Bool)arg1 wasAutomaticallySelected:(_Bool)arg2 additionalPassUniqueIdentifiers:(id)arg3;
+ (id)contextWithAnimation:(_Bool)arg1 additionalPassUniqueIdentifiers:(id)arg2;
+ (id)contextWithAnimation:(_Bool)arg1;
@property(copy, nonatomic) id <NSCopying> userInfo; // @synthesize userInfo=_userInfo;
@property(nonatomic) _Bool wasAutomaticallySelected; // @synthesize wasAutomaticallySelected=_wasAutomaticallySelected;
@property(copy, nonatomic) NSArray *additionalPassUniqueIdentifiers; // @synthesize additionalPassUniqueIdentifiers=_additionalPassUniqueIdentifiers;
@property(nonatomic, getter=wantsPersistentCardEmulation) _Bool persistentCardEmulation; // @synthesize persistentCardEmulation=_persistentCardEmulation;
@property(nonatomic, getter=isPostPayment) _Bool postPayment; // @synthesize postPayment=_postPayment;
@property(nonatomic, getter=isFieldDetect) _Bool fieldDetect; // @synthesize fieldDetect=_fieldDetect;
@property(nonatomic) _Bool animated; // @synthesize animated=_animated;
- (void).cxx_destruct;
- (id)description;

@end

