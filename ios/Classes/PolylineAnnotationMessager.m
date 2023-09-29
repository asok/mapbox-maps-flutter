// Autogenerated from Pigeon (v11.0.1), do not edit directly.
// See also: https://pub.dev/packages/pigeon

#import "PolylineAnnotationMessager.h"

#if TARGET_OS_OSX
#import <FlutterMacOS/FlutterMacOS.h>
#else
#import <Flutter/Flutter.h>
#endif

#if !__has_feature(objc_arc)
#error File requires ARC to be enabled.
#endif

/// The display of line endings.
@implementation FLTLineCapBox
- (instancetype)initWithValue:(FLTLineCap)value {
  self = [super init];
  if (self) {
    _value = value;
  }
  return self;
}
@end

/// The display of lines when joining.
@implementation FLTLineJoinBox
- (instancetype)initWithValue:(FLTLineJoin)value {
  self = [super init];
  if (self) {
    _value = value;
  }
  return self;
}
@end

/// Controls the frame of reference for `line-translate`.
@implementation FLTLineTranslateAnchorBox
- (instancetype)initWithValue:(FLTLineTranslateAnchor)value {
  self = [super init];
  if (self) {
    _value = value;
  }
  return self;
}
@end

static NSArray *wrapResult(id result, FlutterError *error) {
  if (error) {
    return @[
      error.code ?: [NSNull null], error.message ?: [NSNull null], error.details ?: [NSNull null]
    ];
  }
  return @[ result ?: [NSNull null] ];
}
static id GetNullableObjectAtIndex(NSArray *array, NSInteger key) {
  id result = array[key];
  return (result == [NSNull null]) ? nil : result;
}

@interface FLTPolylineAnnotation ()
+ (FLTPolylineAnnotation *)fromList:(NSArray *)list;
+ (nullable FLTPolylineAnnotation *)nullableFromList:(NSArray *)list;
- (NSArray *)toList;
@end

@interface FLTPolylineAnnotationOptions ()
+ (FLTPolylineAnnotationOptions *)fromList:(NSArray *)list;
+ (nullable FLTPolylineAnnotationOptions *)nullableFromList:(NSArray *)list;
- (NSArray *)toList;
@end

@implementation FLTPolylineAnnotation
+ (instancetype)makeWithId:(NSString *)id
    geometry:(nullable NSDictionary<NSString *, id> *)geometry
    lineJoin:(nullable FLTLineJoinBox *)lineJoin
    lineSortKey:(nullable NSNumber *)lineSortKey
    lineBlur:(nullable NSNumber *)lineBlur
    lineColor:(nullable NSNumber *)lineColor
    lineGapWidth:(nullable NSNumber *)lineGapWidth
    lineOffset:(nullable NSNumber *)lineOffset
    lineOpacity:(nullable NSNumber *)lineOpacity
    linePattern:(nullable NSString *)linePattern
    lineWidth:(nullable NSNumber *)lineWidth {
  FLTPolylineAnnotation* pigeonResult = [[FLTPolylineAnnotation alloc] init];
  pigeonResult.id = id;
  pigeonResult.geometry = geometry;
  pigeonResult.lineJoin = lineJoin;
  pigeonResult.lineSortKey = lineSortKey;
  pigeonResult.lineBlur = lineBlur;
  pigeonResult.lineColor = lineColor;
  pigeonResult.lineGapWidth = lineGapWidth;
  pigeonResult.lineOffset = lineOffset;
  pigeonResult.lineOpacity = lineOpacity;
  pigeonResult.linePattern = linePattern;
  pigeonResult.lineWidth = lineWidth;
  return pigeonResult;
}
+ (FLTPolylineAnnotation *)fromList:(NSArray *)list {
  FLTPolylineAnnotation *pigeonResult = [[FLTPolylineAnnotation alloc] init];
  pigeonResult.id = GetNullableObjectAtIndex(list, 0);
  NSAssert(pigeonResult.id != nil, @"");
  pigeonResult.geometry = GetNullableObjectAtIndex(list, 1);
  NSNumber *lineJoinAsNumber = GetNullableObjectAtIndex(list, 2);
  FLTLineJoinBox *lineJoin = lineJoinAsNumber == nil ? nil : [[FLTLineJoinBox alloc] initWithValue: [lineJoinAsNumber integerValue]];
  pigeonResult.lineJoin = lineJoin;
  pigeonResult.lineSortKey = GetNullableObjectAtIndex(list, 3);
  pigeonResult.lineBlur = GetNullableObjectAtIndex(list, 4);
  pigeonResult.lineColor = GetNullableObjectAtIndex(list, 5);
  pigeonResult.lineGapWidth = GetNullableObjectAtIndex(list, 6);
  pigeonResult.lineOffset = GetNullableObjectAtIndex(list, 7);
  pigeonResult.lineOpacity = GetNullableObjectAtIndex(list, 8);
  pigeonResult.linePattern = GetNullableObjectAtIndex(list, 9);
  pigeonResult.lineWidth = GetNullableObjectAtIndex(list, 10);
  return pigeonResult;
}
+ (nullable FLTPolylineAnnotation *)nullableFromList:(NSArray *)list {
  return (list) ? [FLTPolylineAnnotation fromList:list] : nil;
}
- (NSArray *)toList {
  return @[
    (self.id ?: [NSNull null]),
    (self.geometry ?: [NSNull null]),
    (self.lineJoin == nil ? [NSNull null] : [NSNumber numberWithInteger:self.lineJoin.value]),
    (self.lineSortKey ?: [NSNull null]),
    (self.lineBlur ?: [NSNull null]),
    (self.lineColor ?: [NSNull null]),
    (self.lineGapWidth ?: [NSNull null]),
    (self.lineOffset ?: [NSNull null]),
    (self.lineOpacity ?: [NSNull null]),
    (self.linePattern ?: [NSNull null]),
    (self.lineWidth ?: [NSNull null]),
  ];
}
@end

@implementation FLTPolylineAnnotationOptions
+ (instancetype)makeWithGeometry:(nullable NSDictionary<NSString *, id> *)geometry
    lineJoin:(nullable FLTLineJoinBox *)lineJoin
    lineSortKey:(nullable NSNumber *)lineSortKey
    lineBlur:(nullable NSNumber *)lineBlur
    lineColor:(nullable NSNumber *)lineColor
    lineGapWidth:(nullable NSNumber *)lineGapWidth
    lineOffset:(nullable NSNumber *)lineOffset
    lineOpacity:(nullable NSNumber *)lineOpacity
    linePattern:(nullable NSString *)linePattern
    lineWidth:(nullable NSNumber *)lineWidth {
  FLTPolylineAnnotationOptions* pigeonResult = [[FLTPolylineAnnotationOptions alloc] init];
  pigeonResult.geometry = geometry;
  pigeonResult.lineJoin = lineJoin;
  pigeonResult.lineSortKey = lineSortKey;
  pigeonResult.lineBlur = lineBlur;
  pigeonResult.lineColor = lineColor;
  pigeonResult.lineGapWidth = lineGapWidth;
  pigeonResult.lineOffset = lineOffset;
  pigeonResult.lineOpacity = lineOpacity;
  pigeonResult.linePattern = linePattern;
  pigeonResult.lineWidth = lineWidth;
  return pigeonResult;
}
+ (FLTPolylineAnnotationOptions *)fromList:(NSArray *)list {
  FLTPolylineAnnotationOptions *pigeonResult = [[FLTPolylineAnnotationOptions alloc] init];
  pigeonResult.geometry = GetNullableObjectAtIndex(list, 0);
  NSNumber *lineJoinAsNumber = GetNullableObjectAtIndex(list, 1);
  FLTLineJoinBox *lineJoin = lineJoinAsNumber == nil ? nil : [[FLTLineJoinBox alloc] initWithValue: [lineJoinAsNumber integerValue]];
  pigeonResult.lineJoin = lineJoin;
  pigeonResult.lineSortKey = GetNullableObjectAtIndex(list, 2);
  pigeonResult.lineBlur = GetNullableObjectAtIndex(list, 3);
  pigeonResult.lineColor = GetNullableObjectAtIndex(list, 4);
  pigeonResult.lineGapWidth = GetNullableObjectAtIndex(list, 5);
  pigeonResult.lineOffset = GetNullableObjectAtIndex(list, 6);
  pigeonResult.lineOpacity = GetNullableObjectAtIndex(list, 7);
  pigeonResult.linePattern = GetNullableObjectAtIndex(list, 8);
  pigeonResult.lineWidth = GetNullableObjectAtIndex(list, 9);
  return pigeonResult;
}
+ (nullable FLTPolylineAnnotationOptions *)nullableFromList:(NSArray *)list {
  return (list) ? [FLTPolylineAnnotationOptions fromList:list] : nil;
}
- (NSArray *)toList {
  return @[
    (self.geometry ?: [NSNull null]),
    (self.lineJoin == nil ? [NSNull null] : [NSNumber numberWithInteger:self.lineJoin.value]),
    (self.lineSortKey ?: [NSNull null]),
    (self.lineBlur ?: [NSNull null]),
    (self.lineColor ?: [NSNull null]),
    (self.lineGapWidth ?: [NSNull null]),
    (self.lineOffset ?: [NSNull null]),
    (self.lineOpacity ?: [NSNull null]),
    (self.linePattern ?: [NSNull null]),
    (self.lineWidth ?: [NSNull null]),
  ];
}
@end

@interface FLTOnPolylineAnnotationClickListenerCodecReader : FlutterStandardReader
@end
@implementation FLTOnPolylineAnnotationClickListenerCodecReader
- (nullable id)readValueOfType:(UInt8)type {
  switch (type) {
    case 128: 
      return [FLTPolylineAnnotation fromList:[self readValue]];
    default:
      return [super readValueOfType:type];
  }
}
@end

@interface FLTOnPolylineAnnotationClickListenerCodecWriter : FlutterStandardWriter
@end
@implementation FLTOnPolylineAnnotationClickListenerCodecWriter
- (void)writeValue:(id)value {
  if ([value isKindOfClass:[FLTPolylineAnnotation class]]) {
    [self writeByte:128];
    [self writeValue:[value toList]];
  } else {
    [super writeValue:value];
  }
}
@end

@interface FLTOnPolylineAnnotationClickListenerCodecReaderWriter : FlutterStandardReaderWriter
@end
@implementation FLTOnPolylineAnnotationClickListenerCodecReaderWriter
- (FlutterStandardWriter *)writerWithData:(NSMutableData *)data {
  return [[FLTOnPolylineAnnotationClickListenerCodecWriter alloc] initWithData:data];
}
- (FlutterStandardReader *)readerWithData:(NSData *)data {
  return [[FLTOnPolylineAnnotationClickListenerCodecReader alloc] initWithData:data];
}
@end

NSObject<FlutterMessageCodec> *FLTOnPolylineAnnotationClickListenerGetCodec(void) {
  static FlutterStandardMessageCodec *sSharedObject = nil;
  static dispatch_once_t sPred = 0;
  dispatch_once(&sPred, ^{
    FLTOnPolylineAnnotationClickListenerCodecReaderWriter *readerWriter = [[FLTOnPolylineAnnotationClickListenerCodecReaderWriter alloc] init];
    sSharedObject = [FlutterStandardMessageCodec codecWithReaderWriter:readerWriter];
  });
  return sSharedObject;
}

@interface FLTOnPolylineAnnotationClickListener ()
@property(nonatomic, strong) NSObject<FlutterBinaryMessenger> *binaryMessenger;
@end

@implementation FLTOnPolylineAnnotationClickListener

- (instancetype)initWithBinaryMessenger:(NSObject<FlutterBinaryMessenger> *)binaryMessenger {
  self = [super init];
  if (self) {
    _binaryMessenger = binaryMessenger;
  }
  return self;
}
- (void)onPolylineAnnotationClickAnnotation:(FLTPolylineAnnotation *)arg_annotation completion:(void (^)(FlutterError *_Nullable))completion {
  FlutterBasicMessageChannel *channel =
    [FlutterBasicMessageChannel
      messageChannelWithName:@"dev.flutter.pigeon.mapbox_maps_flutter.OnPolylineAnnotationClickListener.onPolylineAnnotationClick"
      binaryMessenger:self.binaryMessenger
      codec:FLTOnPolylineAnnotationClickListenerGetCodec()];
  [channel sendMessage:@[arg_annotation ?: [NSNull null]] reply:^(id reply) {
    completion(nil);
  }];
}
@end

@interface FLT_PolylineAnnotationMessagerCodecReader : FlutterStandardReader
@end
@implementation FLT_PolylineAnnotationMessagerCodecReader
- (nullable id)readValueOfType:(UInt8)type {
  switch (type) {
    case 128: 
      return [FLTPolylineAnnotation fromList:[self readValue]];
    case 129: 
      return [FLTPolylineAnnotationOptions fromList:[self readValue]];
    default:
      return [super readValueOfType:type];
  }
}
@end

@interface FLT_PolylineAnnotationMessagerCodecWriter : FlutterStandardWriter
@end
@implementation FLT_PolylineAnnotationMessagerCodecWriter
- (void)writeValue:(id)value {
  if ([value isKindOfClass:[FLTPolylineAnnotation class]]) {
    [self writeByte:128];
    [self writeValue:[value toList]];
  } else if ([value isKindOfClass:[FLTPolylineAnnotationOptions class]]) {
    [self writeByte:129];
    [self writeValue:[value toList]];
  } else {
    [super writeValue:value];
  }
}
@end

@interface FLT_PolylineAnnotationMessagerCodecReaderWriter : FlutterStandardReaderWriter
@end
@implementation FLT_PolylineAnnotationMessagerCodecReaderWriter
- (FlutterStandardWriter *)writerWithData:(NSMutableData *)data {
  return [[FLT_PolylineAnnotationMessagerCodecWriter alloc] initWithData:data];
}
- (FlutterStandardReader *)readerWithData:(NSData *)data {
  return [[FLT_PolylineAnnotationMessagerCodecReader alloc] initWithData:data];
}
@end

NSObject<FlutterMessageCodec> *FLT_PolylineAnnotationMessagerGetCodec(void) {
  static FlutterStandardMessageCodec *sSharedObject = nil;
  static dispatch_once_t sPred = 0;
  dispatch_once(&sPred, ^{
    FLT_PolylineAnnotationMessagerCodecReaderWriter *readerWriter = [[FLT_PolylineAnnotationMessagerCodecReaderWriter alloc] init];
    sSharedObject = [FlutterStandardMessageCodec codecWithReaderWriter:readerWriter];
  });
  return sSharedObject;
}

void FLT_PolylineAnnotationMessagerSetup(id<FlutterBinaryMessenger> binaryMessenger, NSObject<FLT_PolylineAnnotationMessager> *api) {
  {
    FlutterBasicMessageChannel *channel =
      [[FlutterBasicMessageChannel alloc]
        initWithName:@"dev.flutter.pigeon.mapbox_maps_flutter._PolylineAnnotationMessager.create"
        binaryMessenger:binaryMessenger
        codec:FLT_PolylineAnnotationMessagerGetCodec()];
    if (api) {
      NSCAssert([api respondsToSelector:@selector(createManagerId:annotationOption:completion:)], @"FLT_PolylineAnnotationMessager api (%@) doesn't respond to @selector(createManagerId:annotationOption:completion:)", api);
      [channel setMessageHandler:^(id _Nullable message, FlutterReply callback) {
        NSArray *args = message;
        NSString *arg_managerId = GetNullableObjectAtIndex(args, 0);
        FLTPolylineAnnotationOptions *arg_annotationOption = GetNullableObjectAtIndex(args, 1);
        [api createManagerId:arg_managerId annotationOption:arg_annotationOption completion:^(FLTPolylineAnnotation *_Nullable output, FlutterError *_Nullable error) {
          callback(wrapResult(output, error));
        }];
      }];
    } else {
      [channel setMessageHandler:nil];
    }
  }
  {
    FlutterBasicMessageChannel *channel =
      [[FlutterBasicMessageChannel alloc]
        initWithName:@"dev.flutter.pigeon.mapbox_maps_flutter._PolylineAnnotationMessager.createMulti"
        binaryMessenger:binaryMessenger
        codec:FLT_PolylineAnnotationMessagerGetCodec()];
    if (api) {
      NSCAssert([api respondsToSelector:@selector(createMultiManagerId:annotationOptions:completion:)], @"FLT_PolylineAnnotationMessager api (%@) doesn't respond to @selector(createMultiManagerId:annotationOptions:completion:)", api);
      [channel setMessageHandler:^(id _Nullable message, FlutterReply callback) {
        NSArray *args = message;
        NSString *arg_managerId = GetNullableObjectAtIndex(args, 0);
        NSArray<FLTPolylineAnnotationOptions *> *arg_annotationOptions = GetNullableObjectAtIndex(args, 1);
        [api createMultiManagerId:arg_managerId annotationOptions:arg_annotationOptions completion:^(NSArray<FLTPolylineAnnotation *> *_Nullable output, FlutterError *_Nullable error) {
          callback(wrapResult(output, error));
        }];
      }];
    } else {
      [channel setMessageHandler:nil];
    }
  }
  {
    FlutterBasicMessageChannel *channel =
      [[FlutterBasicMessageChannel alloc]
        initWithName:@"dev.flutter.pigeon.mapbox_maps_flutter._PolylineAnnotationMessager.update"
        binaryMessenger:binaryMessenger
        codec:FLT_PolylineAnnotationMessagerGetCodec()];
    if (api) {
      NSCAssert([api respondsToSelector:@selector(updateManagerId:annotation:completion:)], @"FLT_PolylineAnnotationMessager api (%@) doesn't respond to @selector(updateManagerId:annotation:completion:)", api);
      [channel setMessageHandler:^(id _Nullable message, FlutterReply callback) {
        NSArray *args = message;
        NSString *arg_managerId = GetNullableObjectAtIndex(args, 0);
        FLTPolylineAnnotation *arg_annotation = GetNullableObjectAtIndex(args, 1);
        [api updateManagerId:arg_managerId annotation:arg_annotation completion:^(FlutterError *_Nullable error) {
          callback(wrapResult(nil, error));
        }];
      }];
    } else {
      [channel setMessageHandler:nil];
    }
  }
  {
    FlutterBasicMessageChannel *channel =
      [[FlutterBasicMessageChannel alloc]
        initWithName:@"dev.flutter.pigeon.mapbox_maps_flutter._PolylineAnnotationMessager.delete"
        binaryMessenger:binaryMessenger
        codec:FLT_PolylineAnnotationMessagerGetCodec()];
    if (api) {
      NSCAssert([api respondsToSelector:@selector(deleteManagerId:annotation:completion:)], @"FLT_PolylineAnnotationMessager api (%@) doesn't respond to @selector(deleteManagerId:annotation:completion:)", api);
      [channel setMessageHandler:^(id _Nullable message, FlutterReply callback) {
        NSArray *args = message;
        NSString *arg_managerId = GetNullableObjectAtIndex(args, 0);
        FLTPolylineAnnotation *arg_annotation = GetNullableObjectAtIndex(args, 1);
        [api deleteManagerId:arg_managerId annotation:arg_annotation completion:^(FlutterError *_Nullable error) {
          callback(wrapResult(nil, error));
        }];
      }];
    } else {
      [channel setMessageHandler:nil];
    }
  }
  {
    FlutterBasicMessageChannel *channel =
      [[FlutterBasicMessageChannel alloc]
        initWithName:@"dev.flutter.pigeon.mapbox_maps_flutter._PolylineAnnotationMessager.deleteAll"
        binaryMessenger:binaryMessenger
        codec:FLT_PolylineAnnotationMessagerGetCodec()];
    if (api) {
      NSCAssert([api respondsToSelector:@selector(deleteAllManagerId:completion:)], @"FLT_PolylineAnnotationMessager api (%@) doesn't respond to @selector(deleteAllManagerId:completion:)", api);
      [channel setMessageHandler:^(id _Nullable message, FlutterReply callback) {
        NSArray *args = message;
        NSString *arg_managerId = GetNullableObjectAtIndex(args, 0);
        [api deleteAllManagerId:arg_managerId completion:^(FlutterError *_Nullable error) {
          callback(wrapResult(nil, error));
        }];
      }];
    } else {
      [channel setMessageHandler:nil];
    }
  }
  {
    FlutterBasicMessageChannel *channel =
      [[FlutterBasicMessageChannel alloc]
        initWithName:@"dev.flutter.pigeon.mapbox_maps_flutter._PolylineAnnotationMessager.setLineCap"
        binaryMessenger:binaryMessenger
        codec:FLT_PolylineAnnotationMessagerGetCodec()];
    if (api) {
      NSCAssert([api respondsToSelector:@selector(setLineCapManagerId:lineCap:completion:)], @"FLT_PolylineAnnotationMessager api (%@) doesn't respond to @selector(setLineCapManagerId:lineCap:completion:)", api);
      [channel setMessageHandler:^(id _Nullable message, FlutterReply callback) {
        NSArray *args = message;
        NSString *arg_managerId = GetNullableObjectAtIndex(args, 0);
        FLTLineCap arg_lineCap = [GetNullableObjectAtIndex(args, 1) integerValue];
        [api setLineCapManagerId:arg_managerId lineCap:arg_lineCap completion:^(FlutterError *_Nullable error) {
          callback(wrapResult(nil, error));
        }];
      }];
    } else {
      [channel setMessageHandler:nil];
    }
  }
  {
    FlutterBasicMessageChannel *channel =
      [[FlutterBasicMessageChannel alloc]
        initWithName:@"dev.flutter.pigeon.mapbox_maps_flutter._PolylineAnnotationMessager.getLineCap"
        binaryMessenger:binaryMessenger
        codec:FLT_PolylineAnnotationMessagerGetCodec()];
    if (api) {
      NSCAssert([api respondsToSelector:@selector(getLineCapManagerId:completion:)], @"FLT_PolylineAnnotationMessager api (%@) doesn't respond to @selector(getLineCapManagerId:completion:)", api);
      [channel setMessageHandler:^(id _Nullable message, FlutterReply callback) {
        NSArray *args = message;
        NSString *arg_managerId = GetNullableObjectAtIndex(args, 0);
        [api getLineCapManagerId:arg_managerId completion:^(NSNumber *_Nullable output, FlutterError *_Nullable error) {
          callback(wrapResult(output, error));
        }];
      }];
    } else {
      [channel setMessageHandler:nil];
    }
  }
  {
    FlutterBasicMessageChannel *channel =
      [[FlutterBasicMessageChannel alloc]
        initWithName:@"dev.flutter.pigeon.mapbox_maps_flutter._PolylineAnnotationMessager.setLineMiterLimit"
        binaryMessenger:binaryMessenger
        codec:FLT_PolylineAnnotationMessagerGetCodec()];
    if (api) {
      NSCAssert([api respondsToSelector:@selector(setLineMiterLimitManagerId:lineMiterLimit:completion:)], @"FLT_PolylineAnnotationMessager api (%@) doesn't respond to @selector(setLineMiterLimitManagerId:lineMiterLimit:completion:)", api);
      [channel setMessageHandler:^(id _Nullable message, FlutterReply callback) {
        NSArray *args = message;
        NSString *arg_managerId = GetNullableObjectAtIndex(args, 0);
        NSNumber *arg_lineMiterLimit = GetNullableObjectAtIndex(args, 1);
        [api setLineMiterLimitManagerId:arg_managerId lineMiterLimit:arg_lineMiterLimit completion:^(FlutterError *_Nullable error) {
          callback(wrapResult(nil, error));
        }];
      }];
    } else {
      [channel setMessageHandler:nil];
    }
  }
  {
    FlutterBasicMessageChannel *channel =
      [[FlutterBasicMessageChannel alloc]
        initWithName:@"dev.flutter.pigeon.mapbox_maps_flutter._PolylineAnnotationMessager.getLineMiterLimit"
        binaryMessenger:binaryMessenger
        codec:FLT_PolylineAnnotationMessagerGetCodec()];
    if (api) {
      NSCAssert([api respondsToSelector:@selector(getLineMiterLimitManagerId:completion:)], @"FLT_PolylineAnnotationMessager api (%@) doesn't respond to @selector(getLineMiterLimitManagerId:completion:)", api);
      [channel setMessageHandler:^(id _Nullable message, FlutterReply callback) {
        NSArray *args = message;
        NSString *arg_managerId = GetNullableObjectAtIndex(args, 0);
        [api getLineMiterLimitManagerId:arg_managerId completion:^(NSNumber *_Nullable output, FlutterError *_Nullable error) {
          callback(wrapResult(output, error));
        }];
      }];
    } else {
      [channel setMessageHandler:nil];
    }
  }
  {
    FlutterBasicMessageChannel *channel =
      [[FlutterBasicMessageChannel alloc]
        initWithName:@"dev.flutter.pigeon.mapbox_maps_flutter._PolylineAnnotationMessager.setLineRoundLimit"
        binaryMessenger:binaryMessenger
        codec:FLT_PolylineAnnotationMessagerGetCodec()];
    if (api) {
      NSCAssert([api respondsToSelector:@selector(setLineRoundLimitManagerId:lineRoundLimit:completion:)], @"FLT_PolylineAnnotationMessager api (%@) doesn't respond to @selector(setLineRoundLimitManagerId:lineRoundLimit:completion:)", api);
      [channel setMessageHandler:^(id _Nullable message, FlutterReply callback) {
        NSArray *args = message;
        NSString *arg_managerId = GetNullableObjectAtIndex(args, 0);
        NSNumber *arg_lineRoundLimit = GetNullableObjectAtIndex(args, 1);
        [api setLineRoundLimitManagerId:arg_managerId lineRoundLimit:arg_lineRoundLimit completion:^(FlutterError *_Nullable error) {
          callback(wrapResult(nil, error));
        }];
      }];
    } else {
      [channel setMessageHandler:nil];
    }
  }
  {
    FlutterBasicMessageChannel *channel =
      [[FlutterBasicMessageChannel alloc]
        initWithName:@"dev.flutter.pigeon.mapbox_maps_flutter._PolylineAnnotationMessager.getLineRoundLimit"
        binaryMessenger:binaryMessenger
        codec:FLT_PolylineAnnotationMessagerGetCodec()];
    if (api) {
      NSCAssert([api respondsToSelector:@selector(getLineRoundLimitManagerId:completion:)], @"FLT_PolylineAnnotationMessager api (%@) doesn't respond to @selector(getLineRoundLimitManagerId:completion:)", api);
      [channel setMessageHandler:^(id _Nullable message, FlutterReply callback) {
        NSArray *args = message;
        NSString *arg_managerId = GetNullableObjectAtIndex(args, 0);
        [api getLineRoundLimitManagerId:arg_managerId completion:^(NSNumber *_Nullable output, FlutterError *_Nullable error) {
          callback(wrapResult(output, error));
        }];
      }];
    } else {
      [channel setMessageHandler:nil];
    }
  }
  {
    FlutterBasicMessageChannel *channel =
      [[FlutterBasicMessageChannel alloc]
        initWithName:@"dev.flutter.pigeon.mapbox_maps_flutter._PolylineAnnotationMessager.setLineDasharray"
        binaryMessenger:binaryMessenger
        codec:FLT_PolylineAnnotationMessagerGetCodec()];
    if (api) {
      NSCAssert([api respondsToSelector:@selector(setLineDasharrayManagerId:lineDasharray:completion:)], @"FLT_PolylineAnnotationMessager api (%@) doesn't respond to @selector(setLineDasharrayManagerId:lineDasharray:completion:)", api);
      [channel setMessageHandler:^(id _Nullable message, FlutterReply callback) {
        NSArray *args = message;
        NSString *arg_managerId = GetNullableObjectAtIndex(args, 0);
        NSArray<NSNumber *> *arg_lineDasharray = GetNullableObjectAtIndex(args, 1);
        [api setLineDasharrayManagerId:arg_managerId lineDasharray:arg_lineDasharray completion:^(FlutterError *_Nullable error) {
          callback(wrapResult(nil, error));
        }];
      }];
    } else {
      [channel setMessageHandler:nil];
    }
  }
  {
    FlutterBasicMessageChannel *channel =
      [[FlutterBasicMessageChannel alloc]
        initWithName:@"dev.flutter.pigeon.mapbox_maps_flutter._PolylineAnnotationMessager.getLineDasharray"
        binaryMessenger:binaryMessenger
        codec:FLT_PolylineAnnotationMessagerGetCodec()];
    if (api) {
      NSCAssert([api respondsToSelector:@selector(getLineDasharrayManagerId:completion:)], @"FLT_PolylineAnnotationMessager api (%@) doesn't respond to @selector(getLineDasharrayManagerId:completion:)", api);
      [channel setMessageHandler:^(id _Nullable message, FlutterReply callback) {
        NSArray *args = message;
        NSString *arg_managerId = GetNullableObjectAtIndex(args, 0);
        [api getLineDasharrayManagerId:arg_managerId completion:^(NSArray<NSNumber *> *_Nullable output, FlutterError *_Nullable error) {
          callback(wrapResult(output, error));
        }];
      }];
    } else {
      [channel setMessageHandler:nil];
    }
  }
  {
    FlutterBasicMessageChannel *channel =
      [[FlutterBasicMessageChannel alloc]
        initWithName:@"dev.flutter.pigeon.mapbox_maps_flutter._PolylineAnnotationMessager.setLineTranslate"
        binaryMessenger:binaryMessenger
        codec:FLT_PolylineAnnotationMessagerGetCodec()];
    if (api) {
      NSCAssert([api respondsToSelector:@selector(setLineTranslateManagerId:lineTranslate:completion:)], @"FLT_PolylineAnnotationMessager api (%@) doesn't respond to @selector(setLineTranslateManagerId:lineTranslate:completion:)", api);
      [channel setMessageHandler:^(id _Nullable message, FlutterReply callback) {
        NSArray *args = message;
        NSString *arg_managerId = GetNullableObjectAtIndex(args, 0);
        NSArray<NSNumber *> *arg_lineTranslate = GetNullableObjectAtIndex(args, 1);
        [api setLineTranslateManagerId:arg_managerId lineTranslate:arg_lineTranslate completion:^(FlutterError *_Nullable error) {
          callback(wrapResult(nil, error));
        }];
      }];
    } else {
      [channel setMessageHandler:nil];
    }
  }
  {
    FlutterBasicMessageChannel *channel =
      [[FlutterBasicMessageChannel alloc]
        initWithName:@"dev.flutter.pigeon.mapbox_maps_flutter._PolylineAnnotationMessager.getLineTranslate"
        binaryMessenger:binaryMessenger
        codec:FLT_PolylineAnnotationMessagerGetCodec()];
    if (api) {
      NSCAssert([api respondsToSelector:@selector(getLineTranslateManagerId:completion:)], @"FLT_PolylineAnnotationMessager api (%@) doesn't respond to @selector(getLineTranslateManagerId:completion:)", api);
      [channel setMessageHandler:^(id _Nullable message, FlutterReply callback) {
        NSArray *args = message;
        NSString *arg_managerId = GetNullableObjectAtIndex(args, 0);
        [api getLineTranslateManagerId:arg_managerId completion:^(NSArray<NSNumber *> *_Nullable output, FlutterError *_Nullable error) {
          callback(wrapResult(output, error));
        }];
      }];
    } else {
      [channel setMessageHandler:nil];
    }
  }
  {
    FlutterBasicMessageChannel *channel =
      [[FlutterBasicMessageChannel alloc]
        initWithName:@"dev.flutter.pigeon.mapbox_maps_flutter._PolylineAnnotationMessager.setLineTranslateAnchor"
        binaryMessenger:binaryMessenger
        codec:FLT_PolylineAnnotationMessagerGetCodec()];
    if (api) {
      NSCAssert([api respondsToSelector:@selector(setLineTranslateAnchorManagerId:lineTranslateAnchor:completion:)], @"FLT_PolylineAnnotationMessager api (%@) doesn't respond to @selector(setLineTranslateAnchorManagerId:lineTranslateAnchor:completion:)", api);
      [channel setMessageHandler:^(id _Nullable message, FlutterReply callback) {
        NSArray *args = message;
        NSString *arg_managerId = GetNullableObjectAtIndex(args, 0);
        FLTLineTranslateAnchor arg_lineTranslateAnchor = [GetNullableObjectAtIndex(args, 1) integerValue];
        [api setLineTranslateAnchorManagerId:arg_managerId lineTranslateAnchor:arg_lineTranslateAnchor completion:^(FlutterError *_Nullable error) {
          callback(wrapResult(nil, error));
        }];
      }];
    } else {
      [channel setMessageHandler:nil];
    }
  }
  {
    FlutterBasicMessageChannel *channel =
      [[FlutterBasicMessageChannel alloc]
        initWithName:@"dev.flutter.pigeon.mapbox_maps_flutter._PolylineAnnotationMessager.getLineTranslateAnchor"
        binaryMessenger:binaryMessenger
        codec:FLT_PolylineAnnotationMessagerGetCodec()];
    if (api) {
      NSCAssert([api respondsToSelector:@selector(getLineTranslateAnchorManagerId:completion:)], @"FLT_PolylineAnnotationMessager api (%@) doesn't respond to @selector(getLineTranslateAnchorManagerId:completion:)", api);
      [channel setMessageHandler:^(id _Nullable message, FlutterReply callback) {
        NSArray *args = message;
        NSString *arg_managerId = GetNullableObjectAtIndex(args, 0);
        [api getLineTranslateAnchorManagerId:arg_managerId completion:^(NSNumber *_Nullable output, FlutterError *_Nullable error) {
          callback(wrapResult(output, error));
        }];
      }];
    } else {
      [channel setMessageHandler:nil];
    }
  }
  {
    FlutterBasicMessageChannel *channel =
      [[FlutterBasicMessageChannel alloc]
        initWithName:@"dev.flutter.pigeon.mapbox_maps_flutter._PolylineAnnotationMessager.setLineTrimOffset"
        binaryMessenger:binaryMessenger
        codec:FLT_PolylineAnnotationMessagerGetCodec()];
    if (api) {
      NSCAssert([api respondsToSelector:@selector(setLineTrimOffsetManagerId:lineTrimOffset:completion:)], @"FLT_PolylineAnnotationMessager api (%@) doesn't respond to @selector(setLineTrimOffsetManagerId:lineTrimOffset:completion:)", api);
      [channel setMessageHandler:^(id _Nullable message, FlutterReply callback) {
        NSArray *args = message;
        NSString *arg_managerId = GetNullableObjectAtIndex(args, 0);
        NSArray<NSNumber *> *arg_lineTrimOffset = GetNullableObjectAtIndex(args, 1);
        [api setLineTrimOffsetManagerId:arg_managerId lineTrimOffset:arg_lineTrimOffset completion:^(FlutterError *_Nullable error) {
          callback(wrapResult(nil, error));
        }];
      }];
    } else {
      [channel setMessageHandler:nil];
    }
  }
  {
    FlutterBasicMessageChannel *channel =
      [[FlutterBasicMessageChannel alloc]
        initWithName:@"dev.flutter.pigeon.mapbox_maps_flutter._PolylineAnnotationMessager.getLineTrimOffset"
        binaryMessenger:binaryMessenger
        codec:FLT_PolylineAnnotationMessagerGetCodec()];
    if (api) {
      NSCAssert([api respondsToSelector:@selector(getLineTrimOffsetManagerId:completion:)], @"FLT_PolylineAnnotationMessager api (%@) doesn't respond to @selector(getLineTrimOffsetManagerId:completion:)", api);
      [channel setMessageHandler:^(id _Nullable message, FlutterReply callback) {
        NSArray *args = message;
        NSString *arg_managerId = GetNullableObjectAtIndex(args, 0);
        [api getLineTrimOffsetManagerId:arg_managerId completion:^(NSArray<NSNumber *> *_Nullable output, FlutterError *_Nullable error) {
          callback(wrapResult(output, error));
        }];
      }];
    } else {
      [channel setMessageHandler:nil];
    }
  }
}
