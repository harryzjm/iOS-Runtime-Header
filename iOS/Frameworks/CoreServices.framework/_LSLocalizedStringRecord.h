//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface _LSLocalizedStringRecord
{
}

+ (id)_propertyClasses;
+ (_Bool)supportsSecureCoding;
+ (id)sanitizeString:(id)arg1;
- (void)_detachFromContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const void *)arg4;
- (id)debugDescription;
- (id)description;
@property(readonly) NSString *defaultStringValue;
@property(readonly) NSDictionary *allStringValues;
- (void)_LSRecord_resolve__missingBundleLocs;
@property(readonly) NSArray *_missingBundleLocs;
- (id)_missingBundleLocsWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LocalizedString *)arg4;
- (void)_LSRecord_resolve__allUnsanitizedStringValues;
@property(readonly) NSDictionary *_allUnsanitizedStringValues;
- (id)_allUnsanitizedStringValuesWithContext:(struct LSContext *)arg1 tableID:(unsigned int)arg2 unitID:(unsigned int)arg3 unitBytes:(const struct LocalizedString *)arg4;
- (id)stringValueWithPreferredLocalizations:(id)arg1;
@property(readonly) NSString *stringValue;
- (id)_initWithContext:(struct LSContext *)arg1 unitID:(unsigned int)arg2;

@end

