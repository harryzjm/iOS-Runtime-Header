//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, TSTTableInfo;

@interface TNFormBasedSheet
{
    TSTTableInfo *_tableInfo;
    NSString *_importedTargetName;
    UUIDData_5fbc143e _tableUID;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *importedTargetName; // @synthesize importedTargetName=_importedTargetName;
@property(nonatomic) UUIDData_5fbc143e tableUID; // @synthesize tableUID=_tableUID;
- (void)resolveImportedTargetNameInDocumentRoot:(id)arg1;
- (id)initWithContext:(id)arg1 importedTargetName:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (_Bool)shouldBeDisplayed;
- (void)clearTableInfoCache;
@property(retain, nonatomic) TSTTableInfo *tableInfo; // @synthesize tableInfo=_tableInfo;
- (_Bool)isForm;
- (double)contentScale;

@end
