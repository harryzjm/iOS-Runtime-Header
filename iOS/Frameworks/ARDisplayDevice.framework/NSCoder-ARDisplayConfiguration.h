//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSCoder.h>

@class MISSING_TYPE;

@interface NSCoder (ARDisplayConfiguration)
- (CDStruct_d2b197d1)decodeConfigViewForKey:(id)arg1;
- (CDStruct_14d5dc5e)arddDecodeMatrixFloat4x4ForKey:(id)arg1;
- (MISSING_TYPE *)arddDecodeVectorFloat4ForKey:(id)arg1;
- (MISSING_TYPE *)arddDecodeVectorFloat3ForKey:(id)arg1;
- (MISSING_TYPE *)arddDecodeVectorFloat2ForKey:(id)arg1;
- (MISSING_TYPE *)arddDecodeVectorUint2ForKey:(id)arg1;
- (CDStruct_4b2885c7)arddDecodeMTLViewportForKey:(id)arg1;
- (struct CGRect)arddDecodeCGRectForKey:(id)arg1;
- (void)encodeConfigView:(CDStruct_d2b197d1)arg1 forKey:(id)arg2;
- (void)arddEncodeMatrixFloat4x4:(CDStruct_14d5dc5e)arg1 forKey:(id)arg2;
- (void)arddEncodeVectorFloat4:(id)arg1 forKey: /* Error: Ran out of types for this method. */;
- (void)arddEncodeVectorFloat3:(id)arg1 forKey: /* Error: Ran out of types for this method. */;
- (void)arddEncodeVectorFloat2:(id)arg1 forKey: /* Error: Ran out of types for this method. */;
- (void)arddEncodeVectorUint2:(id)arg1 forKey: /* Error: Ran out of types for this method. */;
- (void)arddEncodeMTLViewport:(CDStruct_4b2885c7)arg1 forKey:(id)arg2;
- (void)arddEncodeCGRect:(struct CGRect)arg1 forKey:(id)arg2;
@end
