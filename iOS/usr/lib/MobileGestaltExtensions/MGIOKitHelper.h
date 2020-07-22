//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface MGIOKitHelper : NSObject
{
    unsigned int devIterator;
}

- (struct __CFBoolean *)copyBooleanFromServiceTree:(id)arg1 withFirstChar:(BOOL)arg2 propertyName:(id)arg3 withPropertyFirstChar:(BOOL)arg4;
- (struct __CFData *)copyDataFromDeviceTree:(id)arg1 withFirstChar:(BOOL)arg2 propertyName:(id)arg3 withPropertyFirstChar:(BOOL)arg4;
- (struct __CFData *)copyDataFromServiceTree:(id)arg1 withFirstChar:(BOOL)arg2 propertyName:(id)arg3 withPropertyFirstChar:(BOOL)arg4;
- (void *)copyPropertyFromServiceTree:(id)arg1 withFirstChar:(BOOL)arg2 propertyName:(id)arg3 withPropertyFirstChar:(BOOL)arg4;
- (struct __CFString *)copyStringFromServiceTree:(id)arg1 withFirstChar:(BOOL)arg2 propertyName:(id)arg3 withPropertyFirstChar:(BOOL)arg4;
- (struct __CFString *)copyStringFromDeviceTree:(id)arg1 withFirstChar:(BOOL)arg2 propertyName:(id)arg3 withPropertyFirstChar:(BOOL)arg4;
- (struct __CFNumber *)copyNumberFromDeviceTree:(id)arg1 withFirstChar:(BOOL)arg2 propertyName:(id)arg3 withPropertyFirstChar:(BOOL)arg4;
- (struct __CFNumber *)copyNumberFromData:(struct __CFData *)arg1;
- (void *)copyDeviceTreeProperty:(id)arg1 withFirstChar:(BOOL)arg2 propertyName:(id)arg3 withPropertyFirstChar:(BOOL)arg4;
- (void *)copyServiceTreeProperty:(id)arg1 withFirstChar:(BOOL)arg2 propertyName:(id)arg3 withPropertyFirstChar:(BOOL)arg4;
- (unsigned int)copyDeviceTreeStructureNext:(id)arg1 withFirstChar:(BOOL)arg2;
- (_Bool)createServicesIteratorByNameMatch:(const char *)arg1;
- (_Bool)createTreeIterator:(const char *)arg1;
- (id)init;
- (void)dealloc;
- (void)deleteIterator;

@end

