// Autogenerated from Pigeon (v11.0.1), do not edit directly.
// See also: https://pub.dev/packages/pigeon

#import <Foundation/Foundation.h>

@protocol FlutterBinaryMessenger;
@protocol FlutterMessageCodec;
@class FlutterError;
@class FlutterStandardTypedData;

NS_ASSUME_NONNULL_BEGIN

/// Part of the icon placed closest to the anchor.
typedef NS_ENUM(NSUInteger, FLTIconAnchor) {
  /// The center of the icon is placed closest to the anchor.
  FLTIconAnchorCENTER = 0,
  /// The left side of the icon is placed closest to the anchor.
  FLTIconAnchorLEFT = 1,
  /// The right side of the icon is placed closest to the anchor.
  FLTIconAnchorRIGHT = 2,
  /// The top of the icon is placed closest to the anchor.
  FLTIconAnchorTOP = 3,
  /// The bottom of the icon is placed closest to the anchor.
  FLTIconAnchorBOTTOM = 4,
  /// The top left corner of the icon is placed closest to the anchor.
  FLTIconAnchorTOP_LEFT = 5,
  /// The top right corner of the icon is placed closest to the anchor.
  FLTIconAnchorTOP_RIGHT = 6,
  /// The bottom left corner of the icon is placed closest to the anchor.
  FLTIconAnchorBOTTOM_LEFT = 7,
  /// The bottom right corner of the icon is placed closest to the anchor.
  FLTIconAnchorBOTTOM_RIGHT = 8,
};

/// Wrapper for FLTIconAnchor to allow for nullability.
@interface FLTIconAnchorBox : NSObject
@property(nonatomic, assign) FLTIconAnchor value;
- (instancetype)initWithValue:(FLTIconAnchor)value;
@end

/// Orientation of icon when map is pitched.
typedef NS_ENUM(NSUInteger, FLTIconPitchAlignment) {
  /// The icon is aligned to the plane of the map.
  FLTIconPitchAlignmentMAP = 0,
  /// The icon is aligned to the plane of the viewport.
  FLTIconPitchAlignmentVIEWPORT = 1,
  /// Automatically matches the value of {@link ICON_ROTATION_ALIGNMENT}.
  FLTIconPitchAlignmentAUTO = 2,
};

/// Wrapper for FLTIconPitchAlignment to allow for nullability.
@interface FLTIconPitchAlignmentBox : NSObject
@property(nonatomic, assign) FLTIconPitchAlignment value;
- (instancetype)initWithValue:(FLTIconPitchAlignment)value;
@end

/// In combination with `symbol-placement`, determines the rotation behavior of icons.
typedef NS_ENUM(NSUInteger, FLTIconRotationAlignment) {
  /// When {@link SYMBOL_PLACEMENT} is set to {@link Property#SYMBOL_PLACEMENT_POINT}, aligns icons east-west. When {@link SYMBOL_PLACEMENT} is set to {@link Property#SYMBOL_PLACEMENT_LINE} or {@link Property#SYMBOL_PLACEMENT_LINE_CENTER}, aligns icon x-axes with the line.
  FLTIconRotationAlignmentMAP = 0,
  /// Produces icons whose x-axes are aligned with the x-axis of the viewport, regardless of the value of {@link SYMBOL_PLACEMENT}.
  FLTIconRotationAlignmentVIEWPORT = 1,
  /// When {@link SYMBOL_PLACEMENT} is set to {@link Property#SYMBOL_PLACEMENT_POINT}, this is equivalent to {@link Property#ICON_ROTATION_ALIGNMENT_VIEWPORT}. When {@link SYMBOL_PLACEMENT} is set to {@link Property#SYMBOL_PLACEMENT_LINE} or {@link Property#SYMBOL_PLACEMENT_LINE_CENTER}, this is equivalent to {@link Property#ICON_ROTATION_ALIGNMENT_MAP}.
  FLTIconRotationAlignmentAUTO = 2,
};

/// Wrapper for FLTIconRotationAlignment to allow for nullability.
@interface FLTIconRotationAlignmentBox : NSObject
@property(nonatomic, assign) FLTIconRotationAlignment value;
- (instancetype)initWithValue:(FLTIconRotationAlignment)value;
@end

/// Scales the icon to fit around the associated text.
typedef NS_ENUM(NSUInteger, FLTIconTextFit) {
  /// The icon is displayed at its intrinsic aspect ratio.
  FLTIconTextFitNONE = 0,
  /// The icon is scaled in the x-dimension to fit the width of the text.
  FLTIconTextFitWIDTH = 1,
  /// The icon is scaled in the y-dimension to fit the height of the text.
  FLTIconTextFitHEIGHT = 2,
  /// The icon is scaled in both x- and y-dimensions.
  FLTIconTextFitBOTH = 3,
};

/// Wrapper for FLTIconTextFit to allow for nullability.
@interface FLTIconTextFitBox : NSObject
@property(nonatomic, assign) FLTIconTextFit value;
- (instancetype)initWithValue:(FLTIconTextFit)value;
@end

/// Label placement relative to its geometry.
typedef NS_ENUM(NSUInteger, FLTSymbolPlacement) {
  /// The label is placed at the point where the geometry is located.
  FLTSymbolPlacementPOINT = 0,
  /// The label is placed along the line of the geometry. Can only be used on LineString and Polygon geometries.
  FLTSymbolPlacementLINE = 1,
  /// The label is placed at the center of the line of the geometry. Can only be used on LineString and Polygon geometries. Note that a single feature in a vector tile may contain multiple line geometries.
  FLTSymbolPlacementLINE_CENTER = 2,
};

/// Wrapper for FLTSymbolPlacement to allow for nullability.
@interface FLTSymbolPlacementBox : NSObject
@property(nonatomic, assign) FLTSymbolPlacement value;
- (instancetype)initWithValue:(FLTSymbolPlacement)value;
@end

/// Determines whether overlapping symbols in the same layer are rendered in the order that they appear in the data source or by their y-position relative to the viewport. To control the order and prioritization of symbols otherwise, use `symbol-sort-key`.
typedef NS_ENUM(NSUInteger, FLTSymbolZOrder) {
  /// Sorts symbols by symbol sort key if set. Otherwise, sorts symbols by their y-position relative to the viewport if {@link ICON_ALLOW_OVERLAP} or {@link TEXT_ALLOW_OVERLAP} is set to {@link TRUE} or {@link ICON_IGNORE_PLACEMENT} or {@link TEXT_IGNORE_PLACEMENT} is {@link FALSE}.
  FLTSymbolZOrderAUTO = 0,
  /// Sorts symbols by their y-position relative to the viewport if {@link ICON_ALLOW_OVERLAP} or {@link TEXT_ALLOW_OVERLAP} is set to {@link TRUE} or {@link ICON_IGNORE_PLACEMENT} or {@link TEXT_IGNORE_PLACEMENT} is {@link FALSE}.
  FLTSymbolZOrderVIEWPORT_Y = 1,
  /// Sorts symbols by symbol sort key if set. Otherwise, no sorting is applied; symbols are rendered in the same order as the source data.
  FLTSymbolZOrderSOURCE = 2,
};

/// Wrapper for FLTSymbolZOrder to allow for nullability.
@interface FLTSymbolZOrderBox : NSObject
@property(nonatomic, assign) FLTSymbolZOrder value;
- (instancetype)initWithValue:(FLTSymbolZOrder)value;
@end

/// Part of the text placed closest to the anchor.
typedef NS_ENUM(NSUInteger, FLTTextAnchor) {
  /// The center of the text is placed closest to the anchor.
  FLTTextAnchorCENTER = 0,
  /// The left side of the text is placed closest to the anchor.
  FLTTextAnchorLEFT = 1,
  /// The right side of the text is placed closest to the anchor.
  FLTTextAnchorRIGHT = 2,
  /// The top of the text is placed closest to the anchor.
  FLTTextAnchorTOP = 3,
  /// The bottom of the text is placed closest to the anchor.
  FLTTextAnchorBOTTOM = 4,
  /// The top left corner of the text is placed closest to the anchor.
  FLTTextAnchorTOP_LEFT = 5,
  /// The top right corner of the text is placed closest to the anchor.
  FLTTextAnchorTOP_RIGHT = 6,
  /// The bottom left corner of the text is placed closest to the anchor.
  FLTTextAnchorBOTTOM_LEFT = 7,
  /// The bottom right corner of the text is placed closest to the anchor.
  FLTTextAnchorBOTTOM_RIGHT = 8,
};

/// Wrapper for FLTTextAnchor to allow for nullability.
@interface FLTTextAnchorBox : NSObject
@property(nonatomic, assign) FLTTextAnchor value;
- (instancetype)initWithValue:(FLTTextAnchor)value;
@end

/// Text justification options.
typedef NS_ENUM(NSUInteger, FLTTextJustify) {
  /// The text is aligned towards the anchor position.
  FLTTextJustifyAUTO = 0,
  /// The text is aligned to the left.
  FLTTextJustifyLEFT = 1,
  /// The text is centered.
  FLTTextJustifyCENTER = 2,
  /// The text is aligned to the right.
  FLTTextJustifyRIGHT = 3,
};

/// Wrapper for FLTTextJustify to allow for nullability.
@interface FLTTextJustifyBox : NSObject
@property(nonatomic, assign) FLTTextJustify value;
- (instancetype)initWithValue:(FLTTextJustify)value;
@end

/// Orientation of text when map is pitched.
typedef NS_ENUM(NSUInteger, FLTTextPitchAlignment) {
  /// The text is aligned to the plane of the map.
  FLTTextPitchAlignmentMAP = 0,
  /// The text is aligned to the plane of the viewport.
  FLTTextPitchAlignmentVIEWPORT = 1,
  /// Automatically matches the value of {@link TEXT_ROTATION_ALIGNMENT}.
  FLTTextPitchAlignmentAUTO = 2,
};

/// Wrapper for FLTTextPitchAlignment to allow for nullability.
@interface FLTTextPitchAlignmentBox : NSObject
@property(nonatomic, assign) FLTTextPitchAlignment value;
- (instancetype)initWithValue:(FLTTextPitchAlignment)value;
@end

/// In combination with `symbol-placement`, determines the rotation behavior of the individual glyphs forming the text.
typedef NS_ENUM(NSUInteger, FLTTextRotationAlignment) {
  /// When {@link SYMBOL_PLACEMENT} is set to {@link Property#SYMBOL_PLACEMENT_POINT}, aligns text east-west. When {@link SYMBOL_PLACEMENT} is set to {@link Property#SYMBOL_PLACEMENT_LINE} or {@link Property#SYMBOL_PLACEMENT_LINE_CENTER}, aligns text x-axes with the line.
  FLTTextRotationAlignmentMAP = 0,
  /// Produces glyphs whose x-axes are aligned with the x-axis of the viewport, regardless of the value of {@link SYMBOL_PLACEMENT}.
  FLTTextRotationAlignmentVIEWPORT = 1,
  /// When {@link SYMBOL_PLACEMENT} is set to {@link Property#SYMBOL_PLACEMENT_POINT}, this is equivalent to {@link Property#TEXT_ROTATION_ALIGNMENT_VIEWPORT}. When {@link SYMBOL_PLACEMENT} is set to {@link Property#SYMBOL_PLACEMENT_LINE} or {@link Property#SYMBOL_PLACEMENT_LINE_CENTER}, this is equivalent to {@link Property#TEXT_ROTATION_ALIGNMENT_MAP}.
  FLTTextRotationAlignmentAUTO = 2,
};

/// Wrapper for FLTTextRotationAlignment to allow for nullability.
@interface FLTTextRotationAlignmentBox : NSObject
@property(nonatomic, assign) FLTTextRotationAlignment value;
- (instancetype)initWithValue:(FLTTextRotationAlignment)value;
@end

/// Specifies how to capitalize text, similar to the CSS `text-transform` property.
typedef NS_ENUM(NSUInteger, FLTTextTransform) {
  /// The text is not altered.
  FLTTextTransformNONE = 0,
  /// Forces all letters to be displayed in uppercase.
  FLTTextTransformUPPERCASE = 1,
  /// Forces all letters to be displayed in lowercase.
  FLTTextTransformLOWERCASE = 2,
};

/// Wrapper for FLTTextTransform to allow for nullability.
@interface FLTTextTransformBox : NSObject
@property(nonatomic, assign) FLTTextTransform value;
- (instancetype)initWithValue:(FLTTextTransform)value;
@end

/// To increase the chance of placing high-priority labels on the map, you can provide an array of `text-anchor` locations: the renderer will attempt to place the label at each location, in order, before moving onto the next label. Use `text-justify: auto` to choose justification based on anchor position. To apply an offset, use the `text-radial-offset` or the two-dimensional `text-offset`.
typedef NS_ENUM(NSUInteger, FLTTextVariableAnchor) {
  /// The center of the text is placed closest to the anchor.
  FLTTextVariableAnchorCENTER = 0,
  /// The left side of the text is placed closest to the anchor.
  FLTTextVariableAnchorLEFT = 1,
  /// The right side of the text is placed closest to the anchor.
  FLTTextVariableAnchorRIGHT = 2,
  /// The top of the text is placed closest to the anchor.
  FLTTextVariableAnchorTOP = 3,
  /// The bottom of the text is placed closest to the anchor.
  FLTTextVariableAnchorBOTTOM = 4,
  /// The top left corner of the text is placed closest to the anchor.
  FLTTextVariableAnchorTOP_LEFT = 5,
  /// The top right corner of the text is placed closest to the anchor.
  FLTTextVariableAnchorTOP_RIGHT = 6,
  /// The bottom left corner of the text is placed closest to the anchor.
  FLTTextVariableAnchorBOTTOM_LEFT = 7,
  /// The bottom right corner of the text is placed closest to the anchor.
  FLTTextVariableAnchorBOTTOM_RIGHT = 8,
};

/// Wrapper for FLTTextVariableAnchor to allow for nullability.
@interface FLTTextVariableAnchorBox : NSObject
@property(nonatomic, assign) FLTTextVariableAnchor value;
- (instancetype)initWithValue:(FLTTextVariableAnchor)value;
@end

/// The property allows control over a symbol's orientation. Note that the property values act as a hint, so that a symbol whose language doesn’t support the provided orientation will be laid out in its natural orientation. Example: English point symbol will be rendered horizontally even if array value contains single 'vertical' enum value. The order of elements in an array define priority order for the placement of an orientation variant.
typedef NS_ENUM(NSUInteger, FLTTextWritingMode) {
  /// If a text's language supports horizontal writing mode, symbols with point placement would be laid out horizontally.
  FLTTextWritingModeHORIZONTAL = 0,
  /// If a text's language supports vertical writing mode, symbols with point placement would be laid out vertically.
  FLTTextWritingModeVERTICAL = 1,
};

/// Wrapper for FLTTextWritingMode to allow for nullability.
@interface FLTTextWritingModeBox : NSObject
@property(nonatomic, assign) FLTTextWritingMode value;
- (instancetype)initWithValue:(FLTTextWritingMode)value;
@end

/// Controls the frame of reference for `icon-translate`.
typedef NS_ENUM(NSUInteger, FLTIconTranslateAnchor) {
  /// Icons are translated relative to the map.
  FLTIconTranslateAnchorMAP = 0,
  /// Icons are translated relative to the viewport.
  FLTIconTranslateAnchorVIEWPORT = 1,
};

/// Wrapper for FLTIconTranslateAnchor to allow for nullability.
@interface FLTIconTranslateAnchorBox : NSObject
@property(nonatomic, assign) FLTIconTranslateAnchor value;
- (instancetype)initWithValue:(FLTIconTranslateAnchor)value;
@end

/// Controls the frame of reference for `text-translate`.
typedef NS_ENUM(NSUInteger, FLTTextTranslateAnchor) {
  /// The text is translated relative to the map.
  FLTTextTranslateAnchorMAP = 0,
  /// The text is translated relative to the viewport.
  FLTTextTranslateAnchorVIEWPORT = 1,
};

/// Wrapper for FLTTextTranslateAnchor to allow for nullability.
@interface FLTTextTranslateAnchorBox : NSObject
@property(nonatomic, assign) FLTTextTranslateAnchor value;
- (instancetype)initWithValue:(FLTTextTranslateAnchor)value;
@end

@class FLTPointAnnotation;
@class FLTPointAnnotationOptions;

@interface FLTPointAnnotation : NSObject
/// `init` unavailable to enforce nonnull fields, see the `make` class method.
- (instancetype)init NS_UNAVAILABLE;
+ (instancetype)makeWithId:(NSString *)id
    geometry:(nullable NSDictionary<NSString *, id> *)geometry
    image:(nullable FlutterStandardTypedData *)image
    iconAnchor:(nullable FLTIconAnchorBox *)iconAnchor
    iconImage:(nullable NSString *)iconImage
    iconOffset:(nullable NSArray<NSNumber *> *)iconOffset
    iconRotate:(nullable NSNumber *)iconRotate
    iconSize:(nullable NSNumber *)iconSize
    symbolSortKey:(nullable NSNumber *)symbolSortKey
    textAnchor:(nullable FLTTextAnchorBox *)textAnchor
    textField:(nullable NSString *)textField
    textJustify:(nullable FLTTextJustifyBox *)textJustify
    textLetterSpacing:(nullable NSNumber *)textLetterSpacing
    textMaxWidth:(nullable NSNumber *)textMaxWidth
    textOffset:(nullable NSArray<NSNumber *> *)textOffset
    textRadialOffset:(nullable NSNumber *)textRadialOffset
    textRotate:(nullable NSNumber *)textRotate
    textSize:(nullable NSNumber *)textSize
    textTransform:(nullable FLTTextTransformBox *)textTransform
    iconColor:(nullable NSNumber *)iconColor
    iconHaloBlur:(nullable NSNumber *)iconHaloBlur
    iconHaloColor:(nullable NSNumber *)iconHaloColor
    iconHaloWidth:(nullable NSNumber *)iconHaloWidth
    iconOpacity:(nullable NSNumber *)iconOpacity
    textColor:(nullable NSNumber *)textColor
    textHaloBlur:(nullable NSNumber *)textHaloBlur
    textHaloColor:(nullable NSNumber *)textHaloColor
    textHaloWidth:(nullable NSNumber *)textHaloWidth
    textOpacity:(nullable NSNumber *)textOpacity;
/// The id for annotation
@property(nonatomic, copy) NSString * id;
/// The geometry that determines the location/shape of this annotation
@property(nonatomic, strong, nullable) NSDictionary<NSString *, id> * geometry;
/// The bitmap image for this Annotation
/// Will not take effect if [iconImage] has been set.
@property(nonatomic, strong, nullable) FlutterStandardTypedData * image;
/// Part of the icon placed closest to the anchor.
@property(nonatomic, strong, nullable) FLTIconAnchorBox * iconAnchor;
/// Name of image in sprite to use for drawing an image background.
@property(nonatomic, copy, nullable) NSString * iconImage;
/// Offset distance of icon from its anchor. Positive values indicate right and down, while negative values indicate left and up. Each component is multiplied by the value of `icon-size` to obtain the final offset in pixels. When combined with `icon-rotate` the offset will be as if the rotated direction was up.
@property(nonatomic, strong, nullable) NSArray<NSNumber *> * iconOffset;
/// Rotates the icon clockwise.
@property(nonatomic, strong, nullable) NSNumber * iconRotate;
/// Scales the original size of the icon by the provided factor. The new pixel size of the image will be the original pixel size multiplied by `icon-size`. 1 is the original size; 3 triples the size of the image.
@property(nonatomic, strong, nullable) NSNumber * iconSize;
/// Sorts features in ascending order based on this value. Features with lower sort keys are drawn and placed first.  When `icon-allow-overlap` or `text-allow-overlap` is `false`, features with a lower sort key will have priority during placement. When `icon-allow-overlap` or `text-allow-overlap` is set to `true`, features with a higher sort key will overlap over features with a lower sort key.
@property(nonatomic, strong, nullable) NSNumber * symbolSortKey;
/// Part of the text placed closest to the anchor.
@property(nonatomic, strong, nullable) FLTTextAnchorBox * textAnchor;
/// Value to use for a text label. If a plain `string` is provided, it will be treated as a `formatted` with default/inherited formatting options.
@property(nonatomic, copy, nullable) NSString * textField;
/// Text justification options.
@property(nonatomic, strong, nullable) FLTTextJustifyBox * textJustify;
/// Text tracking amount.
@property(nonatomic, strong, nullable) NSNumber * textLetterSpacing;
/// The maximum line width for text wrapping.
@property(nonatomic, strong, nullable) NSNumber * textMaxWidth;
/// Offset distance of text from its anchor. Positive values indicate right and down, while negative values indicate left and up. If used with text-variable-anchor, input values will be taken as absolute values. Offsets along the x- and y-axis will be applied automatically based on the anchor position.
@property(nonatomic, strong, nullable) NSArray<NSNumber *> * textOffset;
/// Radial offset of text, in the direction of the symbol's anchor. Useful in combination with `text-variable-anchor`, which defaults to using the two-dimensional `text-offset` if present.
@property(nonatomic, strong, nullable) NSNumber * textRadialOffset;
/// Rotates the text clockwise.
@property(nonatomic, strong, nullable) NSNumber * textRotate;
/// Font size.
@property(nonatomic, strong, nullable) NSNumber * textSize;
/// Specifies how to capitalize text, similar to the CSS `text-transform` property.
@property(nonatomic, strong, nullable) FLTTextTransformBox * textTransform;
/// The color of the icon. This can only be used with sdf icons.
@property(nonatomic, strong, nullable) NSNumber * iconColor;
/// Fade out the halo towards the outside.
@property(nonatomic, strong, nullable) NSNumber * iconHaloBlur;
/// The color of the icon's halo. Icon halos can only be used with SDF icons.
@property(nonatomic, strong, nullable) NSNumber * iconHaloColor;
/// Distance of halo to the icon outline.
@property(nonatomic, strong, nullable) NSNumber * iconHaloWidth;
/// The opacity at which the icon will be drawn.
@property(nonatomic, strong, nullable) NSNumber * iconOpacity;
/// The color with which the text will be drawn.
@property(nonatomic, strong, nullable) NSNumber * textColor;
/// The halo's fadeout distance towards the outside.
@property(nonatomic, strong, nullable) NSNumber * textHaloBlur;
/// The color of the text's halo, which helps it stand out from backgrounds.
@property(nonatomic, strong, nullable) NSNumber * textHaloColor;
/// Distance of halo to the font outline. Max text halo width is 1/4 of the font-size.
@property(nonatomic, strong, nullable) NSNumber * textHaloWidth;
/// The opacity at which the text will be drawn.
@property(nonatomic, strong, nullable) NSNumber * textOpacity;
@end

@interface FLTPointAnnotationOptions : NSObject
+ (instancetype)makeWithGeometry:(nullable NSDictionary<NSString *, id> *)geometry
    image:(nullable FlutterStandardTypedData *)image
    iconAnchor:(nullable FLTIconAnchorBox *)iconAnchor
    iconImage:(nullable NSString *)iconImage
    iconOffset:(nullable NSArray<NSNumber *> *)iconOffset
    iconRotate:(nullable NSNumber *)iconRotate
    iconSize:(nullable NSNumber *)iconSize
    symbolSortKey:(nullable NSNumber *)symbolSortKey
    textAnchor:(nullable FLTTextAnchorBox *)textAnchor
    textField:(nullable NSString *)textField
    textJustify:(nullable FLTTextJustifyBox *)textJustify
    textLetterSpacing:(nullable NSNumber *)textLetterSpacing
    textMaxWidth:(nullable NSNumber *)textMaxWidth
    textOffset:(nullable NSArray<NSNumber *> *)textOffset
    textRadialOffset:(nullable NSNumber *)textRadialOffset
    textRotate:(nullable NSNumber *)textRotate
    textSize:(nullable NSNumber *)textSize
    textTransform:(nullable FLTTextTransformBox *)textTransform
    iconColor:(nullable NSNumber *)iconColor
    iconHaloBlur:(nullable NSNumber *)iconHaloBlur
    iconHaloColor:(nullable NSNumber *)iconHaloColor
    iconHaloWidth:(nullable NSNumber *)iconHaloWidth
    iconOpacity:(nullable NSNumber *)iconOpacity
    textColor:(nullable NSNumber *)textColor
    textHaloBlur:(nullable NSNumber *)textHaloBlur
    textHaloColor:(nullable NSNumber *)textHaloColor
    textHaloWidth:(nullable NSNumber *)textHaloWidth
    textOpacity:(nullable NSNumber *)textOpacity;
/// The geometry that determines the location/shape of this annotation
@property(nonatomic, strong, nullable) NSDictionary<NSString *, id> * geometry;
/// The bitmap image for this Annotation
/// Will not take effect if [iconImage] has been set.
@property(nonatomic, strong, nullable) FlutterStandardTypedData * image;
/// Part of the icon placed closest to the anchor.
@property(nonatomic, strong, nullable) FLTIconAnchorBox * iconAnchor;
/// Name of image in sprite to use for drawing an image background.
@property(nonatomic, copy, nullable) NSString * iconImage;
/// Offset distance of icon from its anchor. Positive values indicate right and down, while negative values indicate left and up. Each component is multiplied by the value of `icon-size` to obtain the final offset in pixels. When combined with `icon-rotate` the offset will be as if the rotated direction was up.
@property(nonatomic, strong, nullable) NSArray<NSNumber *> * iconOffset;
/// Rotates the icon clockwise.
@property(nonatomic, strong, nullable) NSNumber * iconRotate;
/// Scales the original size of the icon by the provided factor. The new pixel size of the image will be the original pixel size multiplied by `icon-size`. 1 is the original size; 3 triples the size of the image.
@property(nonatomic, strong, nullable) NSNumber * iconSize;
/// Sorts features in ascending order based on this value. Features with lower sort keys are drawn and placed first.  When `icon-allow-overlap` or `text-allow-overlap` is `false`, features with a lower sort key will have priority during placement. When `icon-allow-overlap` or `text-allow-overlap` is set to `true`, features with a higher sort key will overlap over features with a lower sort key.
@property(nonatomic, strong, nullable) NSNumber * symbolSortKey;
/// Part of the text placed closest to the anchor.
@property(nonatomic, strong, nullable) FLTTextAnchorBox * textAnchor;
/// Value to use for a text label. If a plain `string` is provided, it will be treated as a `formatted` with default/inherited formatting options.
@property(nonatomic, copy, nullable) NSString * textField;
/// Text justification options.
@property(nonatomic, strong, nullable) FLTTextJustifyBox * textJustify;
/// Text tracking amount.
@property(nonatomic, strong, nullable) NSNumber * textLetterSpacing;
/// The maximum line width for text wrapping.
@property(nonatomic, strong, nullable) NSNumber * textMaxWidth;
/// Offset distance of text from its anchor. Positive values indicate right and down, while negative values indicate left and up. If used with text-variable-anchor, input values will be taken as absolute values. Offsets along the x- and y-axis will be applied automatically based on the anchor position.
@property(nonatomic, strong, nullable) NSArray<NSNumber *> * textOffset;
/// Radial offset of text, in the direction of the symbol's anchor. Useful in combination with `text-variable-anchor`, which defaults to using the two-dimensional `text-offset` if present.
@property(nonatomic, strong, nullable) NSNumber * textRadialOffset;
/// Rotates the text clockwise.
@property(nonatomic, strong, nullable) NSNumber * textRotate;
/// Font size.
@property(nonatomic, strong, nullable) NSNumber * textSize;
/// Specifies how to capitalize text, similar to the CSS `text-transform` property.
@property(nonatomic, strong, nullable) FLTTextTransformBox * textTransform;
/// The color of the icon. This can only be used with sdf icons.
@property(nonatomic, strong, nullable) NSNumber * iconColor;
/// Fade out the halo towards the outside.
@property(nonatomic, strong, nullable) NSNumber * iconHaloBlur;
/// The color of the icon's halo. Icon halos can only be used with SDF icons.
@property(nonatomic, strong, nullable) NSNumber * iconHaloColor;
/// Distance of halo to the icon outline.
@property(nonatomic, strong, nullable) NSNumber * iconHaloWidth;
/// The opacity at which the icon will be drawn.
@property(nonatomic, strong, nullable) NSNumber * iconOpacity;
/// The color with which the text will be drawn.
@property(nonatomic, strong, nullable) NSNumber * textColor;
/// The halo's fadeout distance towards the outside.
@property(nonatomic, strong, nullable) NSNumber * textHaloBlur;
/// The color of the text's halo, which helps it stand out from backgrounds.
@property(nonatomic, strong, nullable) NSNumber * textHaloColor;
/// Distance of halo to the font outline. Max text halo width is 1/4 of the font-size.
@property(nonatomic, strong, nullable) NSNumber * textHaloWidth;
/// The opacity at which the text will be drawn.
@property(nonatomic, strong, nullable) NSNumber * textOpacity;
@end

/// The codec used by FLTOnPointAnnotationClickListener.
NSObject<FlutterMessageCodec> *FLTOnPointAnnotationClickListenerGetCodec(void);

@interface FLTOnPointAnnotationClickListener : NSObject
- (instancetype)initWithBinaryMessenger:(id<FlutterBinaryMessenger>)binaryMessenger;
- (void)onPointAnnotationClickAnnotation:(FLTPointAnnotation *)annotation completion:(void (^)(FlutterError *_Nullable))completion;
@end

/// The codec used by FLT_PointAnnotationMessager.
NSObject<FlutterMessageCodec> *FLT_PointAnnotationMessagerGetCodec(void);

@protocol FLT_PointAnnotationMessager
- (void)createManagerId:(NSString *)managerId annotationOption:(FLTPointAnnotationOptions *)annotationOption completion:(void (^)(FLTPointAnnotation *_Nullable, FlutterError *_Nullable))completion;
- (void)createMultiManagerId:(NSString *)managerId annotationOptions:(NSArray<FLTPointAnnotationOptions *> *)annotationOptions completion:(void (^)(NSArray<FLTPointAnnotation *> *_Nullable, FlutterError *_Nullable))completion;
- (void)updateManagerId:(NSString *)managerId annotation:(FLTPointAnnotation *)annotation completion:(void (^)(FlutterError *_Nullable))completion;
- (void)deleteManagerId:(NSString *)managerId annotation:(FLTPointAnnotation *)annotation completion:(void (^)(FlutterError *_Nullable))completion;
- (void)deleteAllManagerId:(NSString *)managerId completion:(void (^)(FlutterError *_Nullable))completion;
- (void)setIconAllowOverlapManagerId:(NSString *)managerId iconAllowOverlap:(NSNumber *)iconAllowOverlap completion:(void (^)(FlutterError *_Nullable))completion;
- (void)getIconAllowOverlapManagerId:(NSString *)managerId completion:(void (^)(NSNumber *_Nullable, FlutterError *_Nullable))completion;
- (void)setIconIgnorePlacementManagerId:(NSString *)managerId iconIgnorePlacement:(NSNumber *)iconIgnorePlacement completion:(void (^)(FlutterError *_Nullable))completion;
- (void)getIconIgnorePlacementManagerId:(NSString *)managerId completion:(void (^)(NSNumber *_Nullable, FlutterError *_Nullable))completion;
- (void)setIconKeepUprightManagerId:(NSString *)managerId iconKeepUpright:(NSNumber *)iconKeepUpright completion:(void (^)(FlutterError *_Nullable))completion;
- (void)getIconKeepUprightManagerId:(NSString *)managerId completion:(void (^)(NSNumber *_Nullable, FlutterError *_Nullable))completion;
- (void)setIconOptionalManagerId:(NSString *)managerId iconOptional:(NSNumber *)iconOptional completion:(void (^)(FlutterError *_Nullable))completion;
- (void)getIconOptionalManagerId:(NSString *)managerId completion:(void (^)(NSNumber *_Nullable, FlutterError *_Nullable))completion;
- (void)setIconPaddingManagerId:(NSString *)managerId iconPadding:(NSNumber *)iconPadding completion:(void (^)(FlutterError *_Nullable))completion;
- (void)getIconPaddingManagerId:(NSString *)managerId completion:(void (^)(NSNumber *_Nullable, FlutterError *_Nullable))completion;
- (void)setIconPitchAlignmentManagerId:(NSString *)managerId iconPitchAlignment:(FLTIconPitchAlignment)iconPitchAlignment completion:(void (^)(FlutterError *_Nullable))completion;
- (void)getIconPitchAlignmentManagerId:(NSString *)managerId completion:(void (^)(NSNumber *_Nullable, FlutterError *_Nullable))completion;
- (void)setIconRotationAlignmentManagerId:(NSString *)managerId iconRotationAlignment:(FLTIconRotationAlignment)iconRotationAlignment completion:(void (^)(FlutterError *_Nullable))completion;
- (void)getIconRotationAlignmentManagerId:(NSString *)managerId completion:(void (^)(NSNumber *_Nullable, FlutterError *_Nullable))completion;
- (void)setIconTextFitManagerId:(NSString *)managerId iconTextFit:(FLTIconTextFit)iconTextFit completion:(void (^)(FlutterError *_Nullable))completion;
- (void)getIconTextFitManagerId:(NSString *)managerId completion:(void (^)(NSNumber *_Nullable, FlutterError *_Nullable))completion;
- (void)setIconTextFitPaddingManagerId:(NSString *)managerId iconTextFitPadding:(NSArray<NSNumber *> *)iconTextFitPadding completion:(void (^)(FlutterError *_Nullable))completion;
- (void)getIconTextFitPaddingManagerId:(NSString *)managerId completion:(void (^)(NSArray<NSNumber *> *_Nullable, FlutterError *_Nullable))completion;
- (void)setSymbolAvoidEdgesManagerId:(NSString *)managerId symbolAvoidEdges:(NSNumber *)symbolAvoidEdges completion:(void (^)(FlutterError *_Nullable))completion;
- (void)getSymbolAvoidEdgesManagerId:(NSString *)managerId completion:(void (^)(NSNumber *_Nullable, FlutterError *_Nullable))completion;
- (void)setSymbolPlacementManagerId:(NSString *)managerId symbolPlacement:(FLTSymbolPlacement)symbolPlacement completion:(void (^)(FlutterError *_Nullable))completion;
- (void)getSymbolPlacementManagerId:(NSString *)managerId completion:(void (^)(NSNumber *_Nullable, FlutterError *_Nullable))completion;
- (void)setSymbolSpacingManagerId:(NSString *)managerId symbolSpacing:(NSNumber *)symbolSpacing completion:(void (^)(FlutterError *_Nullable))completion;
- (void)getSymbolSpacingManagerId:(NSString *)managerId completion:(void (^)(NSNumber *_Nullable, FlutterError *_Nullable))completion;
- (void)setSymbolZOrderManagerId:(NSString *)managerId symbolZOrder:(FLTSymbolZOrder)symbolZOrder completion:(void (^)(FlutterError *_Nullable))completion;
- (void)getSymbolZOrderManagerId:(NSString *)managerId completion:(void (^)(NSNumber *_Nullable, FlutterError *_Nullable))completion;
- (void)setTextAllowOverlapManagerId:(NSString *)managerId textAllowOverlap:(NSNumber *)textAllowOverlap completion:(void (^)(FlutterError *_Nullable))completion;
- (void)getTextAllowOverlapManagerId:(NSString *)managerId completion:(void (^)(NSNumber *_Nullable, FlutterError *_Nullable))completion;
- (void)setTextFontManagerId:(NSString *)managerId textFont:(NSArray<NSString *> *)textFont completion:(void (^)(FlutterError *_Nullable))completion;
- (void)getTextFontManagerId:(NSString *)managerId completion:(void (^)(NSArray<NSString *> *_Nullable, FlutterError *_Nullable))completion;
- (void)setTextIgnorePlacementManagerId:(NSString *)managerId textIgnorePlacement:(NSNumber *)textIgnorePlacement completion:(void (^)(FlutterError *_Nullable))completion;
- (void)getTextIgnorePlacementManagerId:(NSString *)managerId completion:(void (^)(NSNumber *_Nullable, FlutterError *_Nullable))completion;
- (void)setTextKeepUprightManagerId:(NSString *)managerId textKeepUpright:(NSNumber *)textKeepUpright completion:(void (^)(FlutterError *_Nullable))completion;
- (void)getTextKeepUprightManagerId:(NSString *)managerId completion:(void (^)(NSNumber *_Nullable, FlutterError *_Nullable))completion;
- (void)setTextLineHeightManagerId:(NSString *)managerId textLineHeight:(NSNumber *)textLineHeight completion:(void (^)(FlutterError *_Nullable))completion;
- (void)getTextLineHeightManagerId:(NSString *)managerId completion:(void (^)(NSNumber *_Nullable, FlutterError *_Nullable))completion;
- (void)setTextMaxAngleManagerId:(NSString *)managerId textMaxAngle:(NSNumber *)textMaxAngle completion:(void (^)(FlutterError *_Nullable))completion;
- (void)getTextMaxAngleManagerId:(NSString *)managerId completion:(void (^)(NSNumber *_Nullable, FlutterError *_Nullable))completion;
- (void)setTextOptionalManagerId:(NSString *)managerId textOptional:(NSNumber *)textOptional completion:(void (^)(FlutterError *_Nullable))completion;
- (void)getTextOptionalManagerId:(NSString *)managerId completion:(void (^)(NSNumber *_Nullable, FlutterError *_Nullable))completion;
- (void)setTextPaddingManagerId:(NSString *)managerId textPadding:(NSNumber *)textPadding completion:(void (^)(FlutterError *_Nullable))completion;
- (void)getTextPaddingManagerId:(NSString *)managerId completion:(void (^)(NSNumber *_Nullable, FlutterError *_Nullable))completion;
- (void)setTextPitchAlignmentManagerId:(NSString *)managerId textPitchAlignment:(FLTTextPitchAlignment)textPitchAlignment completion:(void (^)(FlutterError *_Nullable))completion;
- (void)getTextPitchAlignmentManagerId:(NSString *)managerId completion:(void (^)(NSNumber *_Nullable, FlutterError *_Nullable))completion;
- (void)setTextRotationAlignmentManagerId:(NSString *)managerId textRotationAlignment:(FLTTextRotationAlignment)textRotationAlignment completion:(void (^)(FlutterError *_Nullable))completion;
- (void)getTextRotationAlignmentManagerId:(NSString *)managerId completion:(void (^)(NSNumber *_Nullable, FlutterError *_Nullable))completion;
- (void)setIconTranslateManagerId:(NSString *)managerId iconTranslate:(NSArray<NSNumber *> *)iconTranslate completion:(void (^)(FlutterError *_Nullable))completion;
- (void)getIconTranslateManagerId:(NSString *)managerId completion:(void (^)(NSArray<NSNumber *> *_Nullable, FlutterError *_Nullable))completion;
- (void)setIconTranslateAnchorManagerId:(NSString *)managerId iconTranslateAnchor:(FLTIconTranslateAnchor)iconTranslateAnchor completion:(void (^)(FlutterError *_Nullable))completion;
- (void)getIconTranslateAnchorManagerId:(NSString *)managerId completion:(void (^)(NSNumber *_Nullable, FlutterError *_Nullable))completion;
- (void)setTextTranslateManagerId:(NSString *)managerId textTranslate:(NSArray<NSNumber *> *)textTranslate completion:(void (^)(FlutterError *_Nullable))completion;
- (void)getTextTranslateManagerId:(NSString *)managerId completion:(void (^)(NSArray<NSNumber *> *_Nullable, FlutterError *_Nullable))completion;
- (void)setTextTranslateAnchorManagerId:(NSString *)managerId textTranslateAnchor:(FLTTextTranslateAnchor)textTranslateAnchor completion:(void (^)(FlutterError *_Nullable))completion;
- (void)getTextTranslateAnchorManagerId:(NSString *)managerId completion:(void (^)(NSNumber *_Nullable, FlutterError *_Nullable))completion;
@end

extern void FLT_PointAnnotationMessagerSetup(id<FlutterBinaryMessenger> binaryMessenger, NSObject<FLT_PointAnnotationMessager> *_Nullable api);

NS_ASSUME_NONNULL_END
