//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "TSPObject.h"

@class NSArray, NSObject, NSString, TSPLazyReferenceArray;
@protocol OS_dispatch_data;

@interface TSPUnknownObject : TSPObject
{
    shared_ptr_bafc106c _archiveInfo;
    NSObject<OS_dispatch_data> *_messagesData;
    NSString *_packageLocator;
    TSPLazyReferenceArray *_objects;
    NSArray *_datas;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_data> *serializedData;
- (void)saveToArchiver:(id)arg1;
- (_Bool)validatedLoadFromUnarchiver:(id)arg1;
- (id)packageLocator;
- (void)willModifyForUpgrade;
- (void)willModify;
- (id)initWithContext:(id)arg1;

@end

