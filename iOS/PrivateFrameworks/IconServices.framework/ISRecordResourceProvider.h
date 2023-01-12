//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LSRecord, NSString;

__attribute__((visibility("hidden")))
@interface ISRecordResourceProvider
{
    NSString *_templateType;
    NSString *_fileExtension;
    LSRecord *_record;
}

- (void).cxx_destruct;
@property(readonly) LSRecord *record; // @synthesize record=_record;
@property(retain) NSString *fileExtension; // @synthesize fileExtension=_fileExtension;
@property(retain) NSString *templateType; // @synthesize templateType=_templateType;
- (_Bool)_isAppleResource;
- (id)symbol;
- (unsigned long long)iconShape;
- (id)customRecipe;
- (id)templateIconResource;
- (id)resourceNamed:(id)arg1;
- (id)iconResource;
- (void)resolveResources;
- (id)initWithRecord:(id)arg1 options:(unsigned long long)arg2;

@end
