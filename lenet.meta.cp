
Ă%%
9
Add
x"T
y"T
z"T"
Ttype:
2	
Ń
	ApplyAdam
var"T	
m"T	
v"T
beta1_power"T
beta2_power"T
lr"T

beta1"T

beta2"T
epsilon"T	
grad"T
out"T"
Ttype:
2	"
use_lockingbool( 
l
ArgMax

input"T
	dimension"Tidx

output	"
Ttype:
2	"
Tidxtype0:
2	
x
Assign
ref"T

value"T

output_ref"T"	
Ttype"
validate_shapebool("
use_lockingbool(
R
BroadcastGradientArgs
s0"T
s1"T
r0"T
r1"T"
Ttype0:
2	
8
Cast	
x"SrcT	
y"DstT"
SrcTtype"
DstTtype
N
Concat

concat_dim
values"T*N
output"T"
Nint(0"	
Ttype
8
Const
output"dtype"
valuetensor"
dtypetype
É
Conv2D

input"T
filter"T
output"T"
Ttype:
2"
strides	list(int)"
use_cudnn_on_gpubool(""
paddingstring:
SAMEVALID"-
data_formatstringNHWC:
NHWCNCHW
ď
Conv2DBackpropFilter

input"T
filter_sizes
out_backprop"T
output"T"
Ttype:
2"
strides	list(int)"
use_cudnn_on_gpubool(""
paddingstring:
SAMEVALID"-
data_formatstringNHWC:
NHWCNCHW
î
Conv2DBackpropInput
input_sizes
filter"T
out_backprop"T
output"T"
Ttype:
2"
strides	list(int)"
use_cudnn_on_gpubool(""
paddingstring:
SAMEVALID"-
data_formatstringNHWC:
NHWCNCHW
9
Div
x"T
y"T
z"T"
Ttype:
2	
A
Equal
x"T
y"T
z
"
Ttype:
2	

W

ExpandDims

input"T
dim"Tdim
output"T"	
Ttype"
Tdimtype0:
2	
4
Fill
dims

value"T
output"T"	
Ttype
+
Floor
x"T
y"T"
Ttype:
2
.
Identity

input"T
output"T"	
Ttype
o
MatMul
a"T
b"T
product"T"
transpose_abool( "
transpose_bbool( "
Ttype:

2
ž
MaxPool

input"T
output"T"
Ttype0:
2"
ksize	list(int)(0"
strides	list(int)(0""
paddingstring:
SAMEVALID"-
data_formatstringNHWC:
NHWCNCHW
ä
MaxPoolGrad

orig_input"T
orig_output"T	
grad"T
output"T"
ksize	list(int)(0"
strides	list(int)(0""
paddingstring:
SAMEVALID"-
data_formatstringNHWC:
NHWCNCHW"
Ttype0:
2
:
Maximum
x"T
y"T
z"T"
Ttype:	
2	

Mean

input"T
reduction_indices"Tidx
output"T"
	keep_dimsbool( "
Ttype:
2	"
Tidxtype0:
2	
<
Mul
x"T
y"T
z"T"
Ttype:
2	
-
Neg
x"T
y"T"
Ttype:
	2	

NoOp

OneHot
indices"TI	
depth
on_value"T
	off_value"T
output"T"
axisint˙˙˙˙˙˙˙˙˙"	
Ttype"
TItype0	:
2	
M
Pack
values"T*N
output"T"
Nint(0"	
Ttype"
axisint 
A
Placeholder
output"dtype"
dtypetype"
shapeshape: 

Prod

input"T
reduction_indices"Tidx
output"T"
	keep_dimsbool( "
Ttype:
2	"
Tidxtype0:
2	
}
RandomUniform

shape"T
output"dtype"
seedint "
seed2int "
dtypetype:
2"
Ttype:
2	
`
Range
start"Tidx
limit"Tidx
delta"Tidx
output"Tidx"
Tidxtype0:
2	
)
Rank

input"T

output"	
Ttype
A
Relu
features"T
activations"T"
Ttype:
2		
S
ReluGrad
	gradients"T
features"T
	backprops"T"
Ttype:
2		
[
Reshape
tensor"T
shape"Tshape
output"T"	
Ttype"
Tshapetype0:
2	
l
	RestoreV2

prefix
tensor_names
shape_and_slices
tensors2dtypes"
dtypes
list(type)(0
i
SaveV2

prefix
tensor_names
shape_and_slices
tensors2dtypes"
dtypes
list(type)(0
P
Shape

input"T
output"out_type"	
Ttype"
out_typetype0:
2	
a
Slice

input"T
begin"Index
size"Index
output"T"	
Ttype"
Indextype:
2	
i
SoftmaxCrossEntropyWithLogits
features"T
labels"T	
loss"T
backprop"T"
Ttype:
2
0
Square
x"T
y"T"
Ttype:
	2	
5
Sub
x"T
y"T
z"T"
Ttype:
	2	

Sum

input"T
reduction_indices"Tidx
output"T"
	keep_dimsbool( "
Ttype:
2	"
Tidxtype0:
2	
c
Tile

input"T
	multiples"
Tmultiples
output"T"	
Ttype"

Tmultiplestype0:
2	

TruncatedNormal

shape"T
output"dtype"
seedint "
seed2int "
dtypetype:
2"
Ttype:
2	
q
Variable
ref"dtype"
shapeshape"
dtypetype"
	containerstring "
shared_namestring 
&
	ZerosLike
x"T
y"T"	
Ttype*0.12.12v0.12.0-10-g4d924e7-dirtyëş
N
PlaceholderPlaceholder*
dtype0*
_output_shapes
:*
shape: 
P
Placeholder_1Placeholder*
shape: *
dtype0*
_output_shapes
:
P
Placeholder_2Placeholder*
dtype0*
_output_shapes
:*
shape: 
g
Placeholder_3Placeholder*
dtype0*/
_output_shapes
:˙˙˙˙˙˙˙˙˙  *
shape: 
P
Placeholder_4Placeholder*
dtype0*
_output_shapes
:*
shape: 
U
one_hot/on_valueConst*
valueB
 *  ?*
dtype0*
_output_shapes
: 
V
one_hot/off_valueConst*
valueB
 *    *
dtype0*
_output_shapes
: 
O
one_hot/depthConst*
dtype0*
_output_shapes
: *
value	B :+

one_hotOneHotPlaceholder_4one_hot/depthone_hot/on_valueone_hot/off_value*
T0*
TI0*
axis˙˙˙˙˙˙˙˙˙*
_output_shapes
:
o
truncated_normal/shapeConst*%
valueB"            *
dtype0*
_output_shapes
:
Z
truncated_normal/meanConst*
valueB
 *    *
dtype0*
_output_shapes
: 
\
truncated_normal/stddevConst*
dtype0*
_output_shapes
: *
valueB
 *ÍĚĚ=
˘
 truncated_normal/TruncatedNormalTruncatedNormaltruncated_normal/shape*
T0*
dtype0*&
_output_shapes
:*
seed2 *

seed 

truncated_normal/mulMul truncated_normal/TruncatedNormaltruncated_normal/stddev*
T0*&
_output_shapes
:
u
truncated_normalAddtruncated_normal/multruncated_normal/mean*&
_output_shapes
:*
T0

VariableVariable*
shape:*
shared_name *
dtype0*&
_output_shapes
:*
	container 
Ź
Variable/AssignAssignVariabletruncated_normal*
use_locking(*
T0*
_class
loc:@Variable*
validate_shape(*&
_output_shapes
:
q
Variable/readIdentityVariable*
T0*
_class
loc:@Variable*&
_output_shapes
:
R
zerosConst*
valueB*    *
dtype0*
_output_shapes
:
t

Variable_1Variable*
shared_name *
dtype0*
_output_shapes
:*
	container *
shape:

Variable_1/AssignAssign
Variable_1zeros*
use_locking(*
T0*
_class
loc:@Variable_1*
validate_shape(*
_output_shapes
:
k
Variable_1/readIdentity
Variable_1*
_output_shapes
:*
T0*
_class
loc:@Variable_1
Ŕ
Conv2DConv2DPlaceholder_3Variable/read*
T0*
strides
*
data_formatNHWC*
use_cudnn_on_gpu(*
paddingVALID*/
_output_shapes
:˙˙˙˙˙˙˙˙˙
]
addAddConv2DVariable_1/read*
T0*/
_output_shapes
:˙˙˙˙˙˙˙˙˙
K
ReluReluadd*
T0*/
_output_shapes
:˙˙˙˙˙˙˙˙˙
Ľ
MaxPoolMaxPoolRelu*/
_output_shapes
:˙˙˙˙˙˙˙˙˙*
T0*
data_formatNHWC*
strides
*
ksize
*
paddingVALID
q
truncated_normal_1/shapeConst*%
valueB"            *
dtype0*
_output_shapes
:
\
truncated_normal_1/meanConst*
dtype0*
_output_shapes
: *
valueB
 *    
^
truncated_normal_1/stddevConst*
valueB
 *ÍĚĚ=*
dtype0*
_output_shapes
: 
Ś
"truncated_normal_1/TruncatedNormalTruncatedNormaltruncated_normal_1/shape*
T0*
dtype0*&
_output_shapes
:*
seed2 *

seed 

truncated_normal_1/mulMul"truncated_normal_1/TruncatedNormaltruncated_normal_1/stddev*
T0*&
_output_shapes
:
{
truncated_normal_1Addtruncated_normal_1/multruncated_normal_1/mean*
T0*&
_output_shapes
:


Variable_2Variable*
shared_name *
dtype0*&
_output_shapes
:*
	container *
shape:
´
Variable_2/AssignAssign
Variable_2truncated_normal_1*
use_locking(*
T0*
_class
loc:@Variable_2*
validate_shape(*&
_output_shapes
:
w
Variable_2/readIdentity
Variable_2*
T0*
_class
loc:@Variable_2*&
_output_shapes
:
T
zeros_1Const*
dtype0*
_output_shapes
:*
valueB*    
t

Variable_3Variable*
shape:*
shared_name *
dtype0*
_output_shapes
:*
	container 

Variable_3/AssignAssign
Variable_3zeros_1*
use_locking(*
T0*
_class
loc:@Variable_3*
validate_shape(*
_output_shapes
:
k
Variable_3/readIdentity
Variable_3*
T0*
_class
loc:@Variable_3*
_output_shapes
:
ž
Conv2D_1Conv2DMaxPoolVariable_2/read*
T0*
strides
*
data_formatNHWC*
use_cudnn_on_gpu(*
paddingVALID*/
_output_shapes
:˙˙˙˙˙˙˙˙˙


a
add_1AddConv2D_1Variable_3/read*
T0*/
_output_shapes
:˙˙˙˙˙˙˙˙˙


O
Relu_1Reluadd_1*
T0*/
_output_shapes
:˙˙˙˙˙˙˙˙˙


Š
	MaxPool_1MaxPoolRelu_1*
T0*
data_formatNHWC*
strides
*
ksize
*
paddingVALID*/
_output_shapes
:˙˙˙˙˙˙˙˙˙
V
dropout/ShapeShape	MaxPool_1*
T0*
out_type0*
_output_shapes
:
_
dropout/random_uniform/minConst*
valueB
 *    *
dtype0*
_output_shapes
: 
_
dropout/random_uniform/maxConst*
valueB
 *  ?*
dtype0*
_output_shapes
: 
¤
$dropout/random_uniform/RandomUniformRandomUniformdropout/Shape*
T0*
dtype0*/
_output_shapes
:˙˙˙˙˙˙˙˙˙*
seed2 *

seed 
z
dropout/random_uniform/subSubdropout/random_uniform/maxdropout/random_uniform/min*
T0*
_output_shapes
: 

dropout/random_uniform/mulMul$dropout/random_uniform/RandomUniformdropout/random_uniform/sub*/
_output_shapes
:˙˙˙˙˙˙˙˙˙*
T0

dropout/random_uniformAdddropout/random_uniform/muldropout/random_uniform/min*
T0*/
_output_shapes
:˙˙˙˙˙˙˙˙˙
Z
dropout/addAddPlaceholderdropout/random_uniform*
_output_shapes
:*
T0
F
dropout/FloorFloordropout/add*
T0*
_output_shapes
:
M
dropout/DivDiv	MaxPool_1Placeholder*
_output_shapes
:*
T0
h
dropout/mulMuldropout/Divdropout/Floor*
T0*/
_output_shapes
:˙˙˙˙˙˙˙˙˙
f
Flatten/Reshape/shapeConst*
valueB"˙˙˙˙  *
dtype0*
_output_shapes
:

Flatten/ReshapeReshapedropout/mulFlatten/Reshape/shape*
T0*
Tshape0*(
_output_shapes
:˙˙˙˙˙˙˙˙˙
i
truncated_normal_2/shapeConst*
valueB"  x   *
dtype0*
_output_shapes
:
\
truncated_normal_2/meanConst*
valueB
 *    *
dtype0*
_output_shapes
: 
^
truncated_normal_2/stddevConst*
valueB
 *ÍĚĚ=*
dtype0*
_output_shapes
: 

"truncated_normal_2/TruncatedNormalTruncatedNormaltruncated_normal_2/shape*

seed *
T0*
dtype0*
_output_shapes
:	x*
seed2 

truncated_normal_2/mulMul"truncated_normal_2/TruncatedNormaltruncated_normal_2/stddev*
T0*
_output_shapes
:	x
t
truncated_normal_2Addtruncated_normal_2/multruncated_normal_2/mean*
T0*
_output_shapes
:	x
~

Variable_4Variable*
dtype0*
_output_shapes
:	x*
	container *
shape:	x*
shared_name 
­
Variable_4/AssignAssign
Variable_4truncated_normal_2*
use_locking(*
T0*
_class
loc:@Variable_4*
validate_shape(*
_output_shapes
:	x
p
Variable_4/readIdentity
Variable_4*
T0*
_class
loc:@Variable_4*
_output_shapes
:	x
T
zeros_2Const*
dtype0*
_output_shapes
:x*
valueBx*    
t

Variable_5Variable*
dtype0*
_output_shapes
:x*
	container *
shape:x*
shared_name 

Variable_5/AssignAssign
Variable_5zeros_2*
T0*
_class
loc:@Variable_5*
validate_shape(*
_output_shapes
:x*
use_locking(
k
Variable_5/readIdentity
Variable_5*
T0*
_class
loc:@Variable_5*
_output_shapes
:x

MatMulMatMulFlatten/ReshapeVariable_4/read*
transpose_b( *
T0*'
_output_shapes
:˙˙˙˙˙˙˙˙˙x*
transpose_a( 
W
add_2AddMatMulVariable_5/read*
T0*'
_output_shapes
:˙˙˙˙˙˙˙˙˙x
G
Relu_2Reluadd_2*
T0*'
_output_shapes
:˙˙˙˙˙˙˙˙˙x
U
dropout_1/ShapeShapeRelu_2*
T0*
out_type0*
_output_shapes
:
a
dropout_1/random_uniform/minConst*
dtype0*
_output_shapes
: *
valueB
 *    
a
dropout_1/random_uniform/maxConst*
valueB
 *  ?*
dtype0*
_output_shapes
: 
 
&dropout_1/random_uniform/RandomUniformRandomUniformdropout_1/Shape*
T0*
dtype0*'
_output_shapes
:˙˙˙˙˙˙˙˙˙x*
seed2 *

seed 

dropout_1/random_uniform/subSubdropout_1/random_uniform/maxdropout_1/random_uniform/min*
T0*
_output_shapes
: 

dropout_1/random_uniform/mulMul&dropout_1/random_uniform/RandomUniformdropout_1/random_uniform/sub*
T0*'
_output_shapes
:˙˙˙˙˙˙˙˙˙x

dropout_1/random_uniformAdddropout_1/random_uniform/muldropout_1/random_uniform/min*'
_output_shapes
:˙˙˙˙˙˙˙˙˙x*
T0
`
dropout_1/addAddPlaceholder_1dropout_1/random_uniform*
_output_shapes
:*
T0
J
dropout_1/FloorFloordropout_1/add*
T0*
_output_shapes
:
N
dropout_1/DivDivRelu_2Placeholder_1*
T0*
_output_shapes
:
f
dropout_1/mulMuldropout_1/Divdropout_1/Floor*
T0*'
_output_shapes
:˙˙˙˙˙˙˙˙˙x
i
truncated_normal_3/shapeConst*
valueB"x   T   *
dtype0*
_output_shapes
:
\
truncated_normal_3/meanConst*
valueB
 *    *
dtype0*
_output_shapes
: 
^
truncated_normal_3/stddevConst*
valueB
 *ÍĚĚ=*
dtype0*
_output_shapes
: 

"truncated_normal_3/TruncatedNormalTruncatedNormaltruncated_normal_3/shape*
T0*
dtype0*
_output_shapes

:xT*
seed2 *

seed 

truncated_normal_3/mulMul"truncated_normal_3/TruncatedNormaltruncated_normal_3/stddev*
T0*
_output_shapes

:xT
s
truncated_normal_3Addtruncated_normal_3/multruncated_normal_3/mean*
T0*
_output_shapes

:xT
|

Variable_6Variable*
dtype0*
_output_shapes

:xT*
	container *
shape
:xT*
shared_name 
Ź
Variable_6/AssignAssign
Variable_6truncated_normal_3*
use_locking(*
T0*
_class
loc:@Variable_6*
validate_shape(*
_output_shapes

:xT
o
Variable_6/readIdentity
Variable_6*
T0*
_class
loc:@Variable_6*
_output_shapes

:xT
T
zeros_3Const*
valueBT*    *
dtype0*
_output_shapes
:T
t

Variable_7Variable*
shape:T*
shared_name *
dtype0*
_output_shapes
:T*
	container 

Variable_7/AssignAssign
Variable_7zeros_3*
validate_shape(*
_output_shapes
:T*
use_locking(*
T0*
_class
loc:@Variable_7
k
Variable_7/readIdentity
Variable_7*
T0*
_class
loc:@Variable_7*
_output_shapes
:T

MatMul_1MatMuldropout_1/mulVariable_6/read*'
_output_shapes
:˙˙˙˙˙˙˙˙˙T*
transpose_a( *
transpose_b( *
T0
Y
add_3AddMatMul_1Variable_7/read*'
_output_shapes
:˙˙˙˙˙˙˙˙˙T*
T0
G
Relu_3Reluadd_3*
T0*'
_output_shapes
:˙˙˙˙˙˙˙˙˙T
U
dropout_2/ShapeShapeRelu_3*
T0*
out_type0*
_output_shapes
:
a
dropout_2/random_uniform/minConst*
valueB
 *    *
dtype0*
_output_shapes
: 
a
dropout_2/random_uniform/maxConst*
valueB
 *  ?*
dtype0*
_output_shapes
: 
 
&dropout_2/random_uniform/RandomUniformRandomUniformdropout_2/Shape*

seed *
T0*
dtype0*'
_output_shapes
:˙˙˙˙˙˙˙˙˙T*
seed2 

dropout_2/random_uniform/subSubdropout_2/random_uniform/maxdropout_2/random_uniform/min*
T0*
_output_shapes
: 

dropout_2/random_uniform/mulMul&dropout_2/random_uniform/RandomUniformdropout_2/random_uniform/sub*'
_output_shapes
:˙˙˙˙˙˙˙˙˙T*
T0

dropout_2/random_uniformAdddropout_2/random_uniform/muldropout_2/random_uniform/min*
T0*'
_output_shapes
:˙˙˙˙˙˙˙˙˙T
`
dropout_2/addAddPlaceholder_2dropout_2/random_uniform*
T0*
_output_shapes
:
J
dropout_2/FloorFloordropout_2/add*
T0*
_output_shapes
:
N
dropout_2/DivDivRelu_3Placeholder_2*
_output_shapes
:*
T0
f
dropout_2/mulMuldropout_2/Divdropout_2/Floor*'
_output_shapes
:˙˙˙˙˙˙˙˙˙T*
T0
i
truncated_normal_4/shapeConst*
dtype0*
_output_shapes
:*
valueB"T   +   
\
truncated_normal_4/meanConst*
valueB
 *    *
dtype0*
_output_shapes
: 
^
truncated_normal_4/stddevConst*
valueB
 *ÍĚĚ=*
dtype0*
_output_shapes
: 

"truncated_normal_4/TruncatedNormalTruncatedNormaltruncated_normal_4/shape*
T0*
dtype0*
_output_shapes

:T+*
seed2 *

seed 

truncated_normal_4/mulMul"truncated_normal_4/TruncatedNormaltruncated_normal_4/stddev*
T0*
_output_shapes

:T+
s
truncated_normal_4Addtruncated_normal_4/multruncated_normal_4/mean*
T0*
_output_shapes

:T+
|

Variable_8Variable*
shared_name *
dtype0*
_output_shapes

:T+*
	container *
shape
:T+
Ź
Variable_8/AssignAssign
Variable_8truncated_normal_4*
use_locking(*
T0*
_class
loc:@Variable_8*
validate_shape(*
_output_shapes

:T+
o
Variable_8/readIdentity
Variable_8*
T0*
_class
loc:@Variable_8*
_output_shapes

:T+
T
zeros_4Const*
valueB+*    *
dtype0*
_output_shapes
:+
t

Variable_9Variable*
dtype0*
_output_shapes
:+*
	container *
shape:+*
shared_name 

Variable_9/AssignAssign
Variable_9zeros_4*
validate_shape(*
_output_shapes
:+*
use_locking(*
T0*
_class
loc:@Variable_9
k
Variable_9/readIdentity
Variable_9*
T0*
_class
loc:@Variable_9*
_output_shapes
:+

MatMul_2MatMuldropout_2/mulVariable_8/read*
transpose_b( *
T0*'
_output_shapes
:˙˙˙˙˙˙˙˙˙+*
transpose_a( 
Y
add_4AddMatMul_2Variable_9/read*
T0*'
_output_shapes
:˙˙˙˙˙˙˙˙˙+
F
RankConst*
value	B :*
dtype0*
_output_shapes
: 
J
ShapeShapeadd_4*
T0*
out_type0*
_output_shapes
:
H
Rank_1Const*
dtype0*
_output_shapes
: *
value	B :
L
Shape_1Shapeadd_4*
T0*
out_type0*
_output_shapes
:
G
Sub/yConst*
value	B :*
dtype0*
_output_shapes
: 
:
SubSubRank_1Sub/y*
T0*
_output_shapes
: 
R
Slice/beginPackSub*
T0*

axis *
N*
_output_shapes
:
T

Slice/sizeConst*
valueB:*
dtype0*
_output_shapes
:
b
SliceSliceShape_1Slice/begin
Slice/size*
T0*
Index0*
_output_shapes
:
S
concat/concat_dimConst*
dtype0*
_output_shapes
: *
value	B : 
b
concat/values_0Const*
dtype0*
_output_shapes
:*
valueB:
˙˙˙˙˙˙˙˙˙
i
concatConcatconcat/concat_dimconcat/values_0Slice*
T0*
N*
_output_shapes
:
j
ReshapeReshapeadd_4concat*0
_output_shapes
:˙˙˙˙˙˙˙˙˙˙˙˙˙˙˙˙˙˙*
T0*
Tshape0
8
Rank_2Rankone_hot*
T0*
_output_shapes
: 
W
Shape_2Shapeone_hot*#
_output_shapes
:˙˙˙˙˙˙˙˙˙*
T0*
out_type0
I
Sub_1/yConst*
value	B :*
dtype0*
_output_shapes
: 
>
Sub_1SubRank_2Sub_1/y*
T0*
_output_shapes
: 
V
Slice_1/beginPackSub_1*
T0*

axis *
N*
_output_shapes
:
V
Slice_1/sizeConst*
valueB:*
dtype0*
_output_shapes
:
h
Slice_1SliceShape_2Slice_1/beginSlice_1/size*
T0*
Index0*
_output_shapes
:
U
concat_1/concat_dimConst*
dtype0*
_output_shapes
: *
value	B : 
d
concat_1/values_0Const*
valueB:
˙˙˙˙˙˙˙˙˙*
dtype0*
_output_shapes
:
q
concat_1Concatconcat_1/concat_dimconcat_1/values_0Slice_1*
T0*
N*
_output_shapes
:
p
	Reshape_1Reshapeone_hotconcat_1*0
_output_shapes
:˙˙˙˙˙˙˙˙˙˙˙˙˙˙˙˙˙˙*
T0*
Tshape0

SoftmaxCrossEntropyWithLogitsSoftmaxCrossEntropyWithLogitsReshape	Reshape_1*
T0*?
_output_shapes-
+:˙˙˙˙˙˙˙˙˙:˙˙˙˙˙˙˙˙˙˙˙˙˙˙˙˙˙˙
I
Sub_2/yConst*
value	B :*
dtype0*
_output_shapes
: 
<
Sub_2SubRankSub_2/y*
T0*
_output_shapes
: 
W
Slice_2/beginConst*
valueB: *
dtype0*
_output_shapes
:
U
Slice_2/sizePackSub_2*
T0*

axis *
N*
_output_shapes
:
o
Slice_2SliceShapeSlice_2/beginSlice_2/size*#
_output_shapes
:˙˙˙˙˙˙˙˙˙*
T0*
Index0
x
	Reshape_2ReshapeSoftmaxCrossEntropyWithLogitsSlice_2*
T0*
Tshape0*#
_output_shapes
:˙˙˙˙˙˙˙˙˙
O
ConstConst*
valueB: *
dtype0*
_output_shapes
:
\
MeanMean	Reshape_2Const*
T0*
_output_shapes
: *

Tidx0*
	keep_dims( 
R
gradients/ShapeConst*
valueB *
dtype0*
_output_shapes
: 
T
gradients/ConstConst*
valueB
 *  ?*
dtype0*
_output_shapes
: 
Y
gradients/FillFillgradients/Shapegradients/Const*
T0*
_output_shapes
: 
k
!gradients/Mean_grad/Reshape/shapeConst*
valueB:*
dtype0*
_output_shapes
:

gradients/Mean_grad/ReshapeReshapegradients/Fill!gradients/Mean_grad/Reshape/shape*
T0*
Tshape0*
_output_shapes
:
b
gradients/Mean_grad/ShapeShape	Reshape_2*
T0*
out_type0*
_output_shapes
:

gradients/Mean_grad/TileTilegradients/Mean_grad/Reshapegradients/Mean_grad/Shape*
T0*#
_output_shapes
:˙˙˙˙˙˙˙˙˙*

Tmultiples0
d
gradients/Mean_grad/Shape_1Shape	Reshape_2*
T0*
out_type0*
_output_shapes
:
^
gradients/Mean_grad/Shape_2Const*
valueB *
dtype0*
_output_shapes
: 
c
gradients/Mean_grad/ConstConst*
dtype0*
_output_shapes
:*
valueB: 

gradients/Mean_grad/ProdProdgradients/Mean_grad/Shape_1gradients/Mean_grad/Const*

Tidx0*
	keep_dims( *
T0*
_output_shapes
: 
e
gradients/Mean_grad/Const_1Const*
dtype0*
_output_shapes
:*
valueB: 

gradients/Mean_grad/Prod_1Prodgradients/Mean_grad/Shape_2gradients/Mean_grad/Const_1*
_output_shapes
: *

Tidx0*
	keep_dims( *
T0
_
gradients/Mean_grad/Maximum/yConst*
value	B :*
dtype0*
_output_shapes
: 

gradients/Mean_grad/MaximumMaximumgradients/Mean_grad/Prod_1gradients/Mean_grad/Maximum/y*
T0*
_output_shapes
: 
{
gradients/Mean_grad/floordivDivgradients/Mean_grad/Prodgradients/Mean_grad/Maximum*
T0*
_output_shapes
: 
n
gradients/Mean_grad/CastCastgradients/Mean_grad/floordiv*

SrcT0*
_output_shapes
: *

DstT0

gradients/Mean_grad/truedivDivgradients/Mean_grad/Tilegradients/Mean_grad/Cast*
T0*#
_output_shapes
:˙˙˙˙˙˙˙˙˙
{
gradients/Reshape_2_grad/ShapeShapeSoftmaxCrossEntropyWithLogits*
T0*
out_type0*
_output_shapes
:
¤
 gradients/Reshape_2_grad/ReshapeReshapegradients/Mean_grad/truedivgradients/Reshape_2_grad/Shape*
T0*
Tshape0*#
_output_shapes
:˙˙˙˙˙˙˙˙˙
}
gradients/zeros_like	ZerosLikeSoftmaxCrossEntropyWithLogits:1*
T0*0
_output_shapes
:˙˙˙˙˙˙˙˙˙˙˙˙˙˙˙˙˙˙

;gradients/SoftmaxCrossEntropyWithLogits_grad/ExpandDims/dimConst*
valueB :
˙˙˙˙˙˙˙˙˙*
dtype0*
_output_shapes
: 
â
7gradients/SoftmaxCrossEntropyWithLogits_grad/ExpandDims
ExpandDims gradients/Reshape_2_grad/Reshape;gradients/SoftmaxCrossEntropyWithLogits_grad/ExpandDims/dim*

Tdim0*
T0*'
_output_shapes
:˙˙˙˙˙˙˙˙˙
Ě
0gradients/SoftmaxCrossEntropyWithLogits_grad/mulMul7gradients/SoftmaxCrossEntropyWithLogits_grad/ExpandDimsSoftmaxCrossEntropyWithLogits:1*
T0*0
_output_shapes
:˙˙˙˙˙˙˙˙˙˙˙˙˙˙˙˙˙˙
a
gradients/Reshape_grad/ShapeShapeadd_4*
_output_shapes
:*
T0*
out_type0
š
gradients/Reshape_grad/ReshapeReshape0gradients/SoftmaxCrossEntropyWithLogits_grad/mulgradients/Reshape_grad/Shape*
T0*
Tshape0*'
_output_shapes
:˙˙˙˙˙˙˙˙˙+
b
gradients/add_4_grad/ShapeShapeMatMul_2*
T0*
out_type0*
_output_shapes
:
f
gradients/add_4_grad/Shape_1Const*
valueB:+*
dtype0*
_output_shapes
:
ş
*gradients/add_4_grad/BroadcastGradientArgsBroadcastGradientArgsgradients/add_4_grad/Shapegradients/add_4_grad/Shape_1*
T0*2
_output_shapes 
:˙˙˙˙˙˙˙˙˙:˙˙˙˙˙˙˙˙˙
Ť
gradients/add_4_grad/SumSumgradients/Reshape_grad/Reshape*gradients/add_4_grad/BroadcastGradientArgs*
_output_shapes
:*

Tidx0*
	keep_dims( *
T0

gradients/add_4_grad/ReshapeReshapegradients/add_4_grad/Sumgradients/add_4_grad/Shape*
T0*
Tshape0*'
_output_shapes
:˙˙˙˙˙˙˙˙˙+
Ż
gradients/add_4_grad/Sum_1Sumgradients/Reshape_grad/Reshape,gradients/add_4_grad/BroadcastGradientArgs:1*
_output_shapes
:*

Tidx0*
	keep_dims( *
T0

gradients/add_4_grad/Reshape_1Reshapegradients/add_4_grad/Sum_1gradients/add_4_grad/Shape_1*
T0*
Tshape0*
_output_shapes
:+
m
%gradients/add_4_grad/tuple/group_depsNoOp^gradients/add_4_grad/Reshape^gradients/add_4_grad/Reshape_1
â
-gradients/add_4_grad/tuple/control_dependencyIdentitygradients/add_4_grad/Reshape&^gradients/add_4_grad/tuple/group_deps*
T0*/
_class%
#!loc:@gradients/add_4_grad/Reshape*'
_output_shapes
:˙˙˙˙˙˙˙˙˙+
Ű
/gradients/add_4_grad/tuple/control_dependency_1Identitygradients/add_4_grad/Reshape_1&^gradients/add_4_grad/tuple/group_deps*
T0*1
_class'
%#loc:@gradients/add_4_grad/Reshape_1*
_output_shapes
:+
Ŕ
gradients/MatMul_2_grad/MatMulMatMul-gradients/add_4_grad/tuple/control_dependencyVariable_8/read*
T0*'
_output_shapes
:˙˙˙˙˙˙˙˙˙T*
transpose_a( *
transpose_b(
ˇ
 gradients/MatMul_2_grad/MatMul_1MatMuldropout_2/mul-gradients/add_4_grad/tuple/control_dependency*
T0*
_output_shapes

:T+*
transpose_a(*
transpose_b( 
t
(gradients/MatMul_2_grad/tuple/group_depsNoOp^gradients/MatMul_2_grad/MatMul!^gradients/MatMul_2_grad/MatMul_1
ě
0gradients/MatMul_2_grad/tuple/control_dependencyIdentitygradients/MatMul_2_grad/MatMul)^gradients/MatMul_2_grad/tuple/group_deps*'
_output_shapes
:˙˙˙˙˙˙˙˙˙T*
T0*1
_class'
%#loc:@gradients/MatMul_2_grad/MatMul
é
2gradients/MatMul_2_grad/tuple/control_dependency_1Identity gradients/MatMul_2_grad/MatMul_1)^gradients/MatMul_2_grad/tuple/group_deps*
T0*3
_class)
'%loc:@gradients/MatMul_2_grad/MatMul_1*
_output_shapes

:T+
x
"gradients/dropout_2/mul_grad/ShapeShapedropout_2/Div*
out_type0*#
_output_shapes
:˙˙˙˙˙˙˙˙˙*
T0
|
$gradients/dropout_2/mul_grad/Shape_1Shapedropout_2/Floor*
T0*
out_type0*#
_output_shapes
:˙˙˙˙˙˙˙˙˙
Ň
2gradients/dropout_2/mul_grad/BroadcastGradientArgsBroadcastGradientArgs"gradients/dropout_2/mul_grad/Shape$gradients/dropout_2/mul_grad/Shape_1*
T0*2
_output_shapes 
:˙˙˙˙˙˙˙˙˙:˙˙˙˙˙˙˙˙˙

 gradients/dropout_2/mul_grad/mulMul0gradients/MatMul_2_grad/tuple/control_dependencydropout_2/Floor*
_output_shapes
:*
T0
˝
 gradients/dropout_2/mul_grad/SumSum gradients/dropout_2/mul_grad/mul2gradients/dropout_2/mul_grad/BroadcastGradientArgs*
_output_shapes
:*

Tidx0*
	keep_dims( *
T0
Ś
$gradients/dropout_2/mul_grad/ReshapeReshape gradients/dropout_2/mul_grad/Sum"gradients/dropout_2/mul_grad/Shape*
_output_shapes
:*
T0*
Tshape0

"gradients/dropout_2/mul_grad/mul_1Muldropout_2/Div0gradients/MatMul_2_grad/tuple/control_dependency*
T0*
_output_shapes
:
Ă
"gradients/dropout_2/mul_grad/Sum_1Sum"gradients/dropout_2/mul_grad/mul_14gradients/dropout_2/mul_grad/BroadcastGradientArgs:1*
T0*
_output_shapes
:*

Tidx0*
	keep_dims( 
Ź
&gradients/dropout_2/mul_grad/Reshape_1Reshape"gradients/dropout_2/mul_grad/Sum_1$gradients/dropout_2/mul_grad/Shape_1*
T0*
Tshape0*
_output_shapes
:

-gradients/dropout_2/mul_grad/tuple/group_depsNoOp%^gradients/dropout_2/mul_grad/Reshape'^gradients/dropout_2/mul_grad/Reshape_1
ó
5gradients/dropout_2/mul_grad/tuple/control_dependencyIdentity$gradients/dropout_2/mul_grad/Reshape.^gradients/dropout_2/mul_grad/tuple/group_deps*
T0*7
_class-
+)loc:@gradients/dropout_2/mul_grad/Reshape*
_output_shapes
:
ů
7gradients/dropout_2/mul_grad/tuple/control_dependency_1Identity&gradients/dropout_2/mul_grad/Reshape_1.^gradients/dropout_2/mul_grad/tuple/group_deps*
T0*9
_class/
-+loc:@gradients/dropout_2/mul_grad/Reshape_1*
_output_shapes
:
h
"gradients/dropout_2/Div_grad/ShapeShapeRelu_3*
out_type0*
_output_shapes
:*
T0
z
$gradients/dropout_2/Div_grad/Shape_1ShapePlaceholder_2*#
_output_shapes
:˙˙˙˙˙˙˙˙˙*
T0*
out_type0
Ň
2gradients/dropout_2/Div_grad/BroadcastGradientArgsBroadcastGradientArgs"gradients/dropout_2/Div_grad/Shape$gradients/dropout_2/Div_grad/Shape_1*2
_output_shapes 
:˙˙˙˙˙˙˙˙˙:˙˙˙˙˙˙˙˙˙*
T0

$gradients/dropout_2/Div_grad/truedivDiv5gradients/dropout_2/mul_grad/tuple/control_dependencyPlaceholder_2*
T0*
_output_shapes
:
Á
 gradients/dropout_2/Div_grad/SumSum$gradients/dropout_2/Div_grad/truediv2gradients/dropout_2/Div_grad/BroadcastGradientArgs*
_output_shapes
:*

Tidx0*
	keep_dims( *
T0
ľ
$gradients/dropout_2/Div_grad/ReshapeReshape gradients/dropout_2/Div_grad/Sum"gradients/dropout_2/Div_grad/Shape*
T0*
Tshape0*'
_output_shapes
:˙˙˙˙˙˙˙˙˙T
a
 gradients/dropout_2/Div_grad/NegNegRelu_3*'
_output_shapes
:˙˙˙˙˙˙˙˙˙T*
T0
_
#gradients/dropout_2/Div_grad/SquareSquarePlaceholder_2*
_output_shapes
:*
T0

&gradients/dropout_2/Div_grad/truediv_1Div gradients/dropout_2/Div_grad/Neg#gradients/dropout_2/Div_grad/Square*
T0*
_output_shapes
:
Š
 gradients/dropout_2/Div_grad/mulMul5gradients/dropout_2/mul_grad/tuple/control_dependency&gradients/dropout_2/Div_grad/truediv_1*
T0*
_output_shapes
:
Á
"gradients/dropout_2/Div_grad/Sum_1Sum gradients/dropout_2/Div_grad/mul4gradients/dropout_2/Div_grad/BroadcastGradientArgs:1*

Tidx0*
	keep_dims( *
T0*
_output_shapes
:
Ź
&gradients/dropout_2/Div_grad/Reshape_1Reshape"gradients/dropout_2/Div_grad/Sum_1$gradients/dropout_2/Div_grad/Shape_1*
_output_shapes
:*
T0*
Tshape0

-gradients/dropout_2/Div_grad/tuple/group_depsNoOp%^gradients/dropout_2/Div_grad/Reshape'^gradients/dropout_2/Div_grad/Reshape_1

5gradients/dropout_2/Div_grad/tuple/control_dependencyIdentity$gradients/dropout_2/Div_grad/Reshape.^gradients/dropout_2/Div_grad/tuple/group_deps*
T0*7
_class-
+)loc:@gradients/dropout_2/Div_grad/Reshape*'
_output_shapes
:˙˙˙˙˙˙˙˙˙T
ů
7gradients/dropout_2/Div_grad/tuple/control_dependency_1Identity&gradients/dropout_2/Div_grad/Reshape_1.^gradients/dropout_2/Div_grad/tuple/group_deps*
_output_shapes
:*
T0*9
_class/
-+loc:@gradients/dropout_2/Div_grad/Reshape_1

gradients/Relu_3_grad/ReluGradReluGrad5gradients/dropout_2/Div_grad/tuple/control_dependencyRelu_3*
T0*'
_output_shapes
:˙˙˙˙˙˙˙˙˙T
b
gradients/add_3_grad/ShapeShapeMatMul_1*
T0*
out_type0*
_output_shapes
:
f
gradients/add_3_grad/Shape_1Const*
_output_shapes
:*
valueB:T*
dtype0
ş
*gradients/add_3_grad/BroadcastGradientArgsBroadcastGradientArgsgradients/add_3_grad/Shapegradients/add_3_grad/Shape_1*
T0*2
_output_shapes 
:˙˙˙˙˙˙˙˙˙:˙˙˙˙˙˙˙˙˙
Ť
gradients/add_3_grad/SumSumgradients/Relu_3_grad/ReluGrad*gradients/add_3_grad/BroadcastGradientArgs*
_output_shapes
:*

Tidx0*
	keep_dims( *
T0

gradients/add_3_grad/ReshapeReshapegradients/add_3_grad/Sumgradients/add_3_grad/Shape*
T0*
Tshape0*'
_output_shapes
:˙˙˙˙˙˙˙˙˙T
Ż
gradients/add_3_grad/Sum_1Sumgradients/Relu_3_grad/ReluGrad,gradients/add_3_grad/BroadcastGradientArgs:1*
_output_shapes
:*

Tidx0*
	keep_dims( *
T0

gradients/add_3_grad/Reshape_1Reshapegradients/add_3_grad/Sum_1gradients/add_3_grad/Shape_1*
T0*
Tshape0*
_output_shapes
:T
m
%gradients/add_3_grad/tuple/group_depsNoOp^gradients/add_3_grad/Reshape^gradients/add_3_grad/Reshape_1
â
-gradients/add_3_grad/tuple/control_dependencyIdentitygradients/add_3_grad/Reshape&^gradients/add_3_grad/tuple/group_deps*
T0*/
_class%
#!loc:@gradients/add_3_grad/Reshape*'
_output_shapes
:˙˙˙˙˙˙˙˙˙T
Ű
/gradients/add_3_grad/tuple/control_dependency_1Identitygradients/add_3_grad/Reshape_1&^gradients/add_3_grad/tuple/group_deps*1
_class'
%#loc:@gradients/add_3_grad/Reshape_1*
_output_shapes
:T*
T0
Ŕ
gradients/MatMul_1_grad/MatMulMatMul-gradients/add_3_grad/tuple/control_dependencyVariable_6/read*
T0*'
_output_shapes
:˙˙˙˙˙˙˙˙˙x*
transpose_a( *
transpose_b(
ˇ
 gradients/MatMul_1_grad/MatMul_1MatMuldropout_1/mul-gradients/add_3_grad/tuple/control_dependency*
_output_shapes

:xT*
transpose_a(*
transpose_b( *
T0
t
(gradients/MatMul_1_grad/tuple/group_depsNoOp^gradients/MatMul_1_grad/MatMul!^gradients/MatMul_1_grad/MatMul_1
ě
0gradients/MatMul_1_grad/tuple/control_dependencyIdentitygradients/MatMul_1_grad/MatMul)^gradients/MatMul_1_grad/tuple/group_deps*
T0*1
_class'
%#loc:@gradients/MatMul_1_grad/MatMul*'
_output_shapes
:˙˙˙˙˙˙˙˙˙x
é
2gradients/MatMul_1_grad/tuple/control_dependency_1Identity gradients/MatMul_1_grad/MatMul_1)^gradients/MatMul_1_grad/tuple/group_deps*
T0*3
_class)
'%loc:@gradients/MatMul_1_grad/MatMul_1*
_output_shapes

:xT
x
"gradients/dropout_1/mul_grad/ShapeShapedropout_1/Div*#
_output_shapes
:˙˙˙˙˙˙˙˙˙*
T0*
out_type0
|
$gradients/dropout_1/mul_grad/Shape_1Shapedropout_1/Floor*
T0*
out_type0*#
_output_shapes
:˙˙˙˙˙˙˙˙˙
Ň
2gradients/dropout_1/mul_grad/BroadcastGradientArgsBroadcastGradientArgs"gradients/dropout_1/mul_grad/Shape$gradients/dropout_1/mul_grad/Shape_1*
T0*2
_output_shapes 
:˙˙˙˙˙˙˙˙˙:˙˙˙˙˙˙˙˙˙

 gradients/dropout_1/mul_grad/mulMul0gradients/MatMul_1_grad/tuple/control_dependencydropout_1/Floor*
_output_shapes
:*
T0
˝
 gradients/dropout_1/mul_grad/SumSum gradients/dropout_1/mul_grad/mul2gradients/dropout_1/mul_grad/BroadcastGradientArgs*

Tidx0*
	keep_dims( *
T0*
_output_shapes
:
Ś
$gradients/dropout_1/mul_grad/ReshapeReshape gradients/dropout_1/mul_grad/Sum"gradients/dropout_1/mul_grad/Shape*
Tshape0*
_output_shapes
:*
T0

"gradients/dropout_1/mul_grad/mul_1Muldropout_1/Div0gradients/MatMul_1_grad/tuple/control_dependency*
T0*
_output_shapes
:
Ă
"gradients/dropout_1/mul_grad/Sum_1Sum"gradients/dropout_1/mul_grad/mul_14gradients/dropout_1/mul_grad/BroadcastGradientArgs:1*

Tidx0*
	keep_dims( *
T0*
_output_shapes
:
Ź
&gradients/dropout_1/mul_grad/Reshape_1Reshape"gradients/dropout_1/mul_grad/Sum_1$gradients/dropout_1/mul_grad/Shape_1*
T0*
Tshape0*
_output_shapes
:

-gradients/dropout_1/mul_grad/tuple/group_depsNoOp%^gradients/dropout_1/mul_grad/Reshape'^gradients/dropout_1/mul_grad/Reshape_1
ó
5gradients/dropout_1/mul_grad/tuple/control_dependencyIdentity$gradients/dropout_1/mul_grad/Reshape.^gradients/dropout_1/mul_grad/tuple/group_deps*
T0*7
_class-
+)loc:@gradients/dropout_1/mul_grad/Reshape*
_output_shapes
:
ů
7gradients/dropout_1/mul_grad/tuple/control_dependency_1Identity&gradients/dropout_1/mul_grad/Reshape_1.^gradients/dropout_1/mul_grad/tuple/group_deps*9
_class/
-+loc:@gradients/dropout_1/mul_grad/Reshape_1*
_output_shapes
:*
T0
h
"gradients/dropout_1/Div_grad/ShapeShapeRelu_2*
out_type0*
_output_shapes
:*
T0
z
$gradients/dropout_1/Div_grad/Shape_1ShapePlaceholder_1*
out_type0*#
_output_shapes
:˙˙˙˙˙˙˙˙˙*
T0
Ň
2gradients/dropout_1/Div_grad/BroadcastGradientArgsBroadcastGradientArgs"gradients/dropout_1/Div_grad/Shape$gradients/dropout_1/Div_grad/Shape_1*
T0*2
_output_shapes 
:˙˙˙˙˙˙˙˙˙:˙˙˙˙˙˙˙˙˙

$gradients/dropout_1/Div_grad/truedivDiv5gradients/dropout_1/mul_grad/tuple/control_dependencyPlaceholder_1*
T0*
_output_shapes
:
Á
 gradients/dropout_1/Div_grad/SumSum$gradients/dropout_1/Div_grad/truediv2gradients/dropout_1/Div_grad/BroadcastGradientArgs*

Tidx0*
	keep_dims( *
T0*
_output_shapes
:
ľ
$gradients/dropout_1/Div_grad/ReshapeReshape gradients/dropout_1/Div_grad/Sum"gradients/dropout_1/Div_grad/Shape*
T0*
Tshape0*'
_output_shapes
:˙˙˙˙˙˙˙˙˙x
a
 gradients/dropout_1/Div_grad/NegNegRelu_2*'
_output_shapes
:˙˙˙˙˙˙˙˙˙x*
T0
_
#gradients/dropout_1/Div_grad/SquareSquarePlaceholder_1*
_output_shapes
:*
T0

&gradients/dropout_1/Div_grad/truediv_1Div gradients/dropout_1/Div_grad/Neg#gradients/dropout_1/Div_grad/Square*
T0*
_output_shapes
:
Š
 gradients/dropout_1/Div_grad/mulMul5gradients/dropout_1/mul_grad/tuple/control_dependency&gradients/dropout_1/Div_grad/truediv_1*
T0*
_output_shapes
:
Á
"gradients/dropout_1/Div_grad/Sum_1Sum gradients/dropout_1/Div_grad/mul4gradients/dropout_1/Div_grad/BroadcastGradientArgs:1*

Tidx0*
	keep_dims( *
T0*
_output_shapes
:
Ź
&gradients/dropout_1/Div_grad/Reshape_1Reshape"gradients/dropout_1/Div_grad/Sum_1$gradients/dropout_1/Div_grad/Shape_1*
T0*
Tshape0*
_output_shapes
:

-gradients/dropout_1/Div_grad/tuple/group_depsNoOp%^gradients/dropout_1/Div_grad/Reshape'^gradients/dropout_1/Div_grad/Reshape_1

5gradients/dropout_1/Div_grad/tuple/control_dependencyIdentity$gradients/dropout_1/Div_grad/Reshape.^gradients/dropout_1/Div_grad/tuple/group_deps*'
_output_shapes
:˙˙˙˙˙˙˙˙˙x*
T0*7
_class-
+)loc:@gradients/dropout_1/Div_grad/Reshape
ů
7gradients/dropout_1/Div_grad/tuple/control_dependency_1Identity&gradients/dropout_1/Div_grad/Reshape_1.^gradients/dropout_1/Div_grad/tuple/group_deps*9
_class/
-+loc:@gradients/dropout_1/Div_grad/Reshape_1*
_output_shapes
:*
T0

gradients/Relu_2_grad/ReluGradReluGrad5gradients/dropout_1/Div_grad/tuple/control_dependencyRelu_2*
T0*'
_output_shapes
:˙˙˙˙˙˙˙˙˙x
`
gradients/add_2_grad/ShapeShapeMatMul*
_output_shapes
:*
T0*
out_type0
f
gradients/add_2_grad/Shape_1Const*
valueB:x*
dtype0*
_output_shapes
:
ş
*gradients/add_2_grad/BroadcastGradientArgsBroadcastGradientArgsgradients/add_2_grad/Shapegradients/add_2_grad/Shape_1*2
_output_shapes 
:˙˙˙˙˙˙˙˙˙:˙˙˙˙˙˙˙˙˙*
T0
Ť
gradients/add_2_grad/SumSumgradients/Relu_2_grad/ReluGrad*gradients/add_2_grad/BroadcastGradientArgs*
T0*
_output_shapes
:*

Tidx0*
	keep_dims( 

gradients/add_2_grad/ReshapeReshapegradients/add_2_grad/Sumgradients/add_2_grad/Shape*'
_output_shapes
:˙˙˙˙˙˙˙˙˙x*
T0*
Tshape0
Ż
gradients/add_2_grad/Sum_1Sumgradients/Relu_2_grad/ReluGrad,gradients/add_2_grad/BroadcastGradientArgs:1*
T0*
_output_shapes
:*

Tidx0*
	keep_dims( 

gradients/add_2_grad/Reshape_1Reshapegradients/add_2_grad/Sum_1gradients/add_2_grad/Shape_1*
T0*
Tshape0*
_output_shapes
:x
m
%gradients/add_2_grad/tuple/group_depsNoOp^gradients/add_2_grad/Reshape^gradients/add_2_grad/Reshape_1
â
-gradients/add_2_grad/tuple/control_dependencyIdentitygradients/add_2_grad/Reshape&^gradients/add_2_grad/tuple/group_deps*'
_output_shapes
:˙˙˙˙˙˙˙˙˙x*
T0*/
_class%
#!loc:@gradients/add_2_grad/Reshape
Ű
/gradients/add_2_grad/tuple/control_dependency_1Identitygradients/add_2_grad/Reshape_1&^gradients/add_2_grad/tuple/group_deps*
_output_shapes
:x*
T0*1
_class'
%#loc:@gradients/add_2_grad/Reshape_1
ż
gradients/MatMul_grad/MatMulMatMul-gradients/add_2_grad/tuple/control_dependencyVariable_4/read*(
_output_shapes
:˙˙˙˙˙˙˙˙˙*
transpose_a( *
transpose_b(*
T0
¸
gradients/MatMul_grad/MatMul_1MatMulFlatten/Reshape-gradients/add_2_grad/tuple/control_dependency*
transpose_b( *
T0*
_output_shapes
:	x*
transpose_a(
n
&gradients/MatMul_grad/tuple/group_depsNoOp^gradients/MatMul_grad/MatMul^gradients/MatMul_grad/MatMul_1
ĺ
.gradients/MatMul_grad/tuple/control_dependencyIdentitygradients/MatMul_grad/MatMul'^gradients/MatMul_grad/tuple/group_deps*
T0*/
_class%
#!loc:@gradients/MatMul_grad/MatMul*(
_output_shapes
:˙˙˙˙˙˙˙˙˙
â
0gradients/MatMul_grad/tuple/control_dependency_1Identitygradients/MatMul_grad/MatMul_1'^gradients/MatMul_grad/tuple/group_deps*
T0*1
_class'
%#loc:@gradients/MatMul_grad/MatMul_1*
_output_shapes
:	x
o
$gradients/Flatten/Reshape_grad/ShapeShapedropout/mul*
_output_shapes
:*
T0*
out_type0
Ď
&gradients/Flatten/Reshape_grad/ReshapeReshape.gradients/MatMul_grad/tuple/control_dependency$gradients/Flatten/Reshape_grad/Shape*
T0*
Tshape0*/
_output_shapes
:˙˙˙˙˙˙˙˙˙
t
 gradients/dropout/mul_grad/ShapeShapedropout/Div*#
_output_shapes
:˙˙˙˙˙˙˙˙˙*
T0*
out_type0
x
"gradients/dropout/mul_grad/Shape_1Shapedropout/Floor*
T0*
out_type0*#
_output_shapes
:˙˙˙˙˙˙˙˙˙
Ě
0gradients/dropout/mul_grad/BroadcastGradientArgsBroadcastGradientArgs gradients/dropout/mul_grad/Shape"gradients/dropout/mul_grad/Shape_1*
T0*2
_output_shapes 
:˙˙˙˙˙˙˙˙˙:˙˙˙˙˙˙˙˙˙

gradients/dropout/mul_grad/mulMul&gradients/Flatten/Reshape_grad/Reshapedropout/Floor*
_output_shapes
:*
T0
ˇ
gradients/dropout/mul_grad/SumSumgradients/dropout/mul_grad/mul0gradients/dropout/mul_grad/BroadcastGradientArgs*
_output_shapes
:*

Tidx0*
	keep_dims( *
T0
 
"gradients/dropout/mul_grad/ReshapeReshapegradients/dropout/mul_grad/Sum gradients/dropout/mul_grad/Shape*
T0*
Tshape0*
_output_shapes
:

 gradients/dropout/mul_grad/mul_1Muldropout/Div&gradients/Flatten/Reshape_grad/Reshape*
T0*
_output_shapes
:
˝
 gradients/dropout/mul_grad/Sum_1Sum gradients/dropout/mul_grad/mul_12gradients/dropout/mul_grad/BroadcastGradientArgs:1*
_output_shapes
:*

Tidx0*
	keep_dims( *
T0
Ś
$gradients/dropout/mul_grad/Reshape_1Reshape gradients/dropout/mul_grad/Sum_1"gradients/dropout/mul_grad/Shape_1*
Tshape0*
_output_shapes
:*
T0

+gradients/dropout/mul_grad/tuple/group_depsNoOp#^gradients/dropout/mul_grad/Reshape%^gradients/dropout/mul_grad/Reshape_1
ë
3gradients/dropout/mul_grad/tuple/control_dependencyIdentity"gradients/dropout/mul_grad/Reshape,^gradients/dropout/mul_grad/tuple/group_deps*
T0*5
_class+
)'loc:@gradients/dropout/mul_grad/Reshape*
_output_shapes
:
ń
5gradients/dropout/mul_grad/tuple/control_dependency_1Identity$gradients/dropout/mul_grad/Reshape_1,^gradients/dropout/mul_grad/tuple/group_deps*
T0*7
_class-
+)loc:@gradients/dropout/mul_grad/Reshape_1*
_output_shapes
:
i
 gradients/dropout/Div_grad/ShapeShape	MaxPool_1*
T0*
out_type0*
_output_shapes
:
v
"gradients/dropout/Div_grad/Shape_1ShapePlaceholder*#
_output_shapes
:˙˙˙˙˙˙˙˙˙*
T0*
out_type0
Ě
0gradients/dropout/Div_grad/BroadcastGradientArgsBroadcastGradientArgs gradients/dropout/Div_grad/Shape"gradients/dropout/Div_grad/Shape_1*
T0*2
_output_shapes 
:˙˙˙˙˙˙˙˙˙:˙˙˙˙˙˙˙˙˙

"gradients/dropout/Div_grad/truedivDiv3gradients/dropout/mul_grad/tuple/control_dependencyPlaceholder*
T0*
_output_shapes
:
ť
gradients/dropout/Div_grad/SumSum"gradients/dropout/Div_grad/truediv0gradients/dropout/Div_grad/BroadcastGradientArgs*
_output_shapes
:*

Tidx0*
	keep_dims( *
T0
ˇ
"gradients/dropout/Div_grad/ReshapeReshapegradients/dropout/Div_grad/Sum gradients/dropout/Div_grad/Shape*/
_output_shapes
:˙˙˙˙˙˙˙˙˙*
T0*
Tshape0
j
gradients/dropout/Div_grad/NegNeg	MaxPool_1*/
_output_shapes
:˙˙˙˙˙˙˙˙˙*
T0
[
!gradients/dropout/Div_grad/SquareSquarePlaceholder*
T0*
_output_shapes
:

$gradients/dropout/Div_grad/truediv_1Divgradients/dropout/Div_grad/Neg!gradients/dropout/Div_grad/Square*
T0*
_output_shapes
:
Ł
gradients/dropout/Div_grad/mulMul3gradients/dropout/mul_grad/tuple/control_dependency$gradients/dropout/Div_grad/truediv_1*
T0*
_output_shapes
:
ť
 gradients/dropout/Div_grad/Sum_1Sumgradients/dropout/Div_grad/mul2gradients/dropout/Div_grad/BroadcastGradientArgs:1*
T0*
_output_shapes
:*

Tidx0*
	keep_dims( 
Ś
$gradients/dropout/Div_grad/Reshape_1Reshape gradients/dropout/Div_grad/Sum_1"gradients/dropout/Div_grad/Shape_1*
T0*
Tshape0*
_output_shapes
:

+gradients/dropout/Div_grad/tuple/group_depsNoOp#^gradients/dropout/Div_grad/Reshape%^gradients/dropout/Div_grad/Reshape_1

3gradients/dropout/Div_grad/tuple/control_dependencyIdentity"gradients/dropout/Div_grad/Reshape,^gradients/dropout/Div_grad/tuple/group_deps*
T0*5
_class+
)'loc:@gradients/dropout/Div_grad/Reshape*/
_output_shapes
:˙˙˙˙˙˙˙˙˙
ń
5gradients/dropout/Div_grad/tuple/control_dependency_1Identity$gradients/dropout/Div_grad/Reshape_1,^gradients/dropout/Div_grad/tuple/group_deps*
_output_shapes
:*
T0*7
_class-
+)loc:@gradients/dropout/Div_grad/Reshape_1

$gradients/MaxPool_1_grad/MaxPoolGradMaxPoolGradRelu_1	MaxPool_13gradients/dropout/Div_grad/tuple/control_dependency*
strides
*
data_formatNHWC*
ksize
*
paddingVALID*/
_output_shapes
:˙˙˙˙˙˙˙˙˙

*
T0

gradients/Relu_1_grad/ReluGradReluGrad$gradients/MaxPool_1_grad/MaxPoolGradRelu_1*/
_output_shapes
:˙˙˙˙˙˙˙˙˙

*
T0
b
gradients/add_1_grad/ShapeShapeConv2D_1*
T0*
out_type0*
_output_shapes
:
f
gradients/add_1_grad/Shape_1Const*
dtype0*
_output_shapes
:*
valueB:
ş
*gradients/add_1_grad/BroadcastGradientArgsBroadcastGradientArgsgradients/add_1_grad/Shapegradients/add_1_grad/Shape_1*2
_output_shapes 
:˙˙˙˙˙˙˙˙˙:˙˙˙˙˙˙˙˙˙*
T0
Ť
gradients/add_1_grad/SumSumgradients/Relu_1_grad/ReluGrad*gradients/add_1_grad/BroadcastGradientArgs*
T0*
_output_shapes
:*

Tidx0*
	keep_dims( 
Ľ
gradients/add_1_grad/ReshapeReshapegradients/add_1_grad/Sumgradients/add_1_grad/Shape*
T0*
Tshape0*/
_output_shapes
:˙˙˙˙˙˙˙˙˙


Ż
gradients/add_1_grad/Sum_1Sumgradients/Relu_1_grad/ReluGrad,gradients/add_1_grad/BroadcastGradientArgs:1*
_output_shapes
:*

Tidx0*
	keep_dims( *
T0

gradients/add_1_grad/Reshape_1Reshapegradients/add_1_grad/Sum_1gradients/add_1_grad/Shape_1*
T0*
Tshape0*
_output_shapes
:
m
%gradients/add_1_grad/tuple/group_depsNoOp^gradients/add_1_grad/Reshape^gradients/add_1_grad/Reshape_1
ę
-gradients/add_1_grad/tuple/control_dependencyIdentitygradients/add_1_grad/Reshape&^gradients/add_1_grad/tuple/group_deps*
T0*/
_class%
#!loc:@gradients/add_1_grad/Reshape*/
_output_shapes
:˙˙˙˙˙˙˙˙˙


Ű
/gradients/add_1_grad/tuple/control_dependency_1Identitygradients/add_1_grad/Reshape_1&^gradients/add_1_grad/tuple/group_deps*
T0*1
_class'
%#loc:@gradients/add_1_grad/Reshape_1*
_output_shapes
:
d
gradients/Conv2D_1_grad/ShapeShapeMaxPool*
T0*
out_type0*
_output_shapes
:
Î
+gradients/Conv2D_1_grad/Conv2DBackpropInputConv2DBackpropInputgradients/Conv2D_1_grad/ShapeVariable_2/read-gradients/add_1_grad/tuple/control_dependency*
T0*
data_formatNHWC*
strides
*
use_cudnn_on_gpu(*
paddingVALID*J
_output_shapes8
6:4˙˙˙˙˙˙˙˙˙˙˙˙˙˙˙˙˙˙˙˙˙˙˙˙˙˙˙˙˙˙˙˙˙˙˙˙
x
gradients/Conv2D_1_grad/Shape_1Const*
_output_shapes
:*%
valueB"            *
dtype0
Ś
,gradients/Conv2D_1_grad/Conv2DBackpropFilterConv2DBackpropFilterMaxPoolgradients/Conv2D_1_grad/Shape_1-gradients/add_1_grad/tuple/control_dependency*
T0*
data_formatNHWC*
strides
*
use_cudnn_on_gpu(*
paddingVALID*&
_output_shapes
:

(gradients/Conv2D_1_grad/tuple/group_depsNoOp,^gradients/Conv2D_1_grad/Conv2DBackpropInput-^gradients/Conv2D_1_grad/Conv2DBackpropFilter

0gradients/Conv2D_1_grad/tuple/control_dependencyIdentity+gradients/Conv2D_1_grad/Conv2DBackpropInput)^gradients/Conv2D_1_grad/tuple/group_deps*
T0*>
_class4
20loc:@gradients/Conv2D_1_grad/Conv2DBackpropInput*/
_output_shapes
:˙˙˙˙˙˙˙˙˙

2gradients/Conv2D_1_grad/tuple/control_dependency_1Identity,gradients/Conv2D_1_grad/Conv2DBackpropFilter)^gradients/Conv2D_1_grad/tuple/group_deps*
T0*?
_class5
31loc:@gradients/Conv2D_1_grad/Conv2DBackpropFilter*&
_output_shapes
:
˙
"gradients/MaxPool_grad/MaxPoolGradMaxPoolGradReluMaxPool0gradients/Conv2D_1_grad/tuple/control_dependency*/
_output_shapes
:˙˙˙˙˙˙˙˙˙*
T0*
strides
*
data_formatNHWC*
ksize
*
paddingVALID

gradients/Relu_grad/ReluGradReluGrad"gradients/MaxPool_grad/MaxPoolGradRelu*
T0*/
_output_shapes
:˙˙˙˙˙˙˙˙˙
^
gradients/add_grad/ShapeShapeConv2D*
out_type0*
_output_shapes
:*
T0
d
gradients/add_grad/Shape_1Const*
valueB:*
dtype0*
_output_shapes
:
´
(gradients/add_grad/BroadcastGradientArgsBroadcastGradientArgsgradients/add_grad/Shapegradients/add_grad/Shape_1*
T0*2
_output_shapes 
:˙˙˙˙˙˙˙˙˙:˙˙˙˙˙˙˙˙˙
Ľ
gradients/add_grad/SumSumgradients/Relu_grad/ReluGrad(gradients/add_grad/BroadcastGradientArgs*
_output_shapes
:*

Tidx0*
	keep_dims( *
T0

gradients/add_grad/ReshapeReshapegradients/add_grad/Sumgradients/add_grad/Shape*
T0*
Tshape0*/
_output_shapes
:˙˙˙˙˙˙˙˙˙
Š
gradients/add_grad/Sum_1Sumgradients/Relu_grad/ReluGrad*gradients/add_grad/BroadcastGradientArgs:1*
_output_shapes
:*

Tidx0*
	keep_dims( *
T0

gradients/add_grad/Reshape_1Reshapegradients/add_grad/Sum_1gradients/add_grad/Shape_1*
_output_shapes
:*
T0*
Tshape0
g
#gradients/add_grad/tuple/group_depsNoOp^gradients/add_grad/Reshape^gradients/add_grad/Reshape_1
â
+gradients/add_grad/tuple/control_dependencyIdentitygradients/add_grad/Reshape$^gradients/add_grad/tuple/group_deps*
T0*-
_class#
!loc:@gradients/add_grad/Reshape*/
_output_shapes
:˙˙˙˙˙˙˙˙˙
Ó
-gradients/add_grad/tuple/control_dependency_1Identitygradients/add_grad/Reshape_1$^gradients/add_grad/tuple/group_deps*
_output_shapes
:*
T0*/
_class%
#!loc:@gradients/add_grad/Reshape_1
h
gradients/Conv2D_grad/ShapeShapePlaceholder_3*
_output_shapes
:*
T0*
out_type0
Ć
)gradients/Conv2D_grad/Conv2DBackpropInputConv2DBackpropInputgradients/Conv2D_grad/ShapeVariable/read+gradients/add_grad/tuple/control_dependency*J
_output_shapes8
6:4˙˙˙˙˙˙˙˙˙˙˙˙˙˙˙˙˙˙˙˙˙˙˙˙˙˙˙˙˙˙˙˙˙˙˙˙*
T0*
data_formatNHWC*
strides
*
use_cudnn_on_gpu(*
paddingVALID
v
gradients/Conv2D_grad/Shape_1Const*%
valueB"            *
dtype0*
_output_shapes
:
Ś
*gradients/Conv2D_grad/Conv2DBackpropFilterConv2DBackpropFilterPlaceholder_3gradients/Conv2D_grad/Shape_1+gradients/add_grad/tuple/control_dependency*
data_formatNHWC*
strides
*
use_cudnn_on_gpu(*
paddingVALID*&
_output_shapes
:*
T0

&gradients/Conv2D_grad/tuple/group_depsNoOp*^gradients/Conv2D_grad/Conv2DBackpropInput+^gradients/Conv2D_grad/Conv2DBackpropFilter

.gradients/Conv2D_grad/tuple/control_dependencyIdentity)gradients/Conv2D_grad/Conv2DBackpropInput'^gradients/Conv2D_grad/tuple/group_deps*
T0*<
_class2
0.loc:@gradients/Conv2D_grad/Conv2DBackpropInput*/
_output_shapes
:˙˙˙˙˙˙˙˙˙  

0gradients/Conv2D_grad/tuple/control_dependency_1Identity*gradients/Conv2D_grad/Conv2DBackpropFilter'^gradients/Conv2D_grad/tuple/group_deps*&
_output_shapes
:*
T0*=
_class3
1/loc:@gradients/Conv2D_grad/Conv2DBackpropFilter
{
beta1_power/initial_valueConst*
valueB
 *fff?*
_class
loc:@Variable*
dtype0*
_output_shapes
: 

beta1_powerVariable*
shared_name *
_class
loc:@Variable*
	container *
shape: *
dtype0*
_output_shapes
: 
Ť
beta1_power/AssignAssignbeta1_powerbeta1_power/initial_value*
_class
loc:@Variable*
validate_shape(*
_output_shapes
: *
use_locking(*
T0
g
beta1_power/readIdentitybeta1_power*
_output_shapes
: *
T0*
_class
loc:@Variable
{
beta2_power/initial_valueConst*
valueB
 *wž?*
_class
loc:@Variable*
dtype0*
_output_shapes
: 

beta2_powerVariable*
dtype0*
_output_shapes
: *
shared_name *
_class
loc:@Variable*
	container *
shape: 
Ť
beta2_power/AssignAssignbeta2_powerbeta2_power/initial_value*
use_locking(*
T0*
_class
loc:@Variable*
validate_shape(*
_output_shapes
: 
g
beta2_power/readIdentitybeta2_power*
T0*
_class
loc:@Variable*
_output_shapes
: 
l
zeros_5Const*
dtype0*&
_output_shapes
:*%
valueB*    
Ź
Variable/AdamVariable*
shared_name *
_class
loc:@Variable*
	container *
shape:*
dtype0*&
_output_shapes
:
­
Variable/Adam/AssignAssignVariable/Adamzeros_5*
use_locking(*
T0*
_class
loc:@Variable*
validate_shape(*&
_output_shapes
:
{
Variable/Adam/readIdentityVariable/Adam*&
_output_shapes
:*
T0*
_class
loc:@Variable
l
zeros_6Const*%
valueB*    *
dtype0*&
_output_shapes
:
Ž
Variable/Adam_1Variable*
shared_name *
_class
loc:@Variable*
	container *
shape:*
dtype0*&
_output_shapes
:
ą
Variable/Adam_1/AssignAssignVariable/Adam_1zeros_6*
validate_shape(*&
_output_shapes
:*
use_locking(*
T0*
_class
loc:@Variable

Variable/Adam_1/readIdentityVariable/Adam_1*
T0*
_class
loc:@Variable*&
_output_shapes
:
T
zeros_7Const*
valueB*    *
dtype0*
_output_shapes
:

Variable_1/AdamVariable*
_class
loc:@Variable_1*
	container *
shape:*
dtype0*
_output_shapes
:*
shared_name 
§
Variable_1/Adam/AssignAssignVariable_1/Adamzeros_7*
validate_shape(*
_output_shapes
:*
use_locking(*
T0*
_class
loc:@Variable_1
u
Variable_1/Adam/readIdentityVariable_1/Adam*
T0*
_class
loc:@Variable_1*
_output_shapes
:
T
zeros_8Const*
dtype0*
_output_shapes
:*
valueB*    

Variable_1/Adam_1Variable*
dtype0*
_output_shapes
:*
shared_name *
_class
loc:@Variable_1*
	container *
shape:
Ť
Variable_1/Adam_1/AssignAssignVariable_1/Adam_1zeros_8*
use_locking(*
T0*
_class
loc:@Variable_1*
validate_shape(*
_output_shapes
:
y
Variable_1/Adam_1/readIdentityVariable_1/Adam_1*
_output_shapes
:*
T0*
_class
loc:@Variable_1
l
zeros_9Const*%
valueB*    *
dtype0*&
_output_shapes
:
°
Variable_2/AdamVariable*
shape:*
dtype0*&
_output_shapes
:*
shared_name *
_class
loc:@Variable_2*
	container 
ł
Variable_2/Adam/AssignAssignVariable_2/Adamzeros_9*
use_locking(*
T0*
_class
loc:@Variable_2*
validate_shape(*&
_output_shapes
:

Variable_2/Adam/readIdentityVariable_2/Adam*
T0*
_class
loc:@Variable_2*&
_output_shapes
:
m
zeros_10Const*&
_output_shapes
:*%
valueB*    *
dtype0
˛
Variable_2/Adam_1Variable*
shared_name *
_class
loc:@Variable_2*
	container *
shape:*
dtype0*&
_output_shapes
:
¸
Variable_2/Adam_1/AssignAssignVariable_2/Adam_1zeros_10*
validate_shape(*&
_output_shapes
:*
use_locking(*
T0*
_class
loc:@Variable_2

Variable_2/Adam_1/readIdentityVariable_2/Adam_1*
T0*
_class
loc:@Variable_2*&
_output_shapes
:
U
zeros_11Const*
valueB*    *
dtype0*
_output_shapes
:

Variable_3/AdamVariable*
shared_name *
_class
loc:@Variable_3*
	container *
shape:*
dtype0*
_output_shapes
:
¨
Variable_3/Adam/AssignAssignVariable_3/Adamzeros_11*
_class
loc:@Variable_3*
validate_shape(*
_output_shapes
:*
use_locking(*
T0
u
Variable_3/Adam/readIdentityVariable_3/Adam*
T0*
_class
loc:@Variable_3*
_output_shapes
:
U
zeros_12Const*
_output_shapes
:*
valueB*    *
dtype0

Variable_3/Adam_1Variable*
shared_name *
_class
loc:@Variable_3*
	container *
shape:*
dtype0*
_output_shapes
:
Ź
Variable_3/Adam_1/AssignAssignVariable_3/Adam_1zeros_12*
_class
loc:@Variable_3*
validate_shape(*
_output_shapes
:*
use_locking(*
T0
y
Variable_3/Adam_1/readIdentityVariable_3/Adam_1*
T0*
_class
loc:@Variable_3*
_output_shapes
:
_
zeros_13Const*
_output_shapes
:	x*
valueB	x*    *
dtype0
˘
Variable_4/AdamVariable*
	container *
shape:	x*
dtype0*
_output_shapes
:	x*
shared_name *
_class
loc:@Variable_4
­
Variable_4/Adam/AssignAssignVariable_4/Adamzeros_13*
T0*
_class
loc:@Variable_4*
validate_shape(*
_output_shapes
:	x*
use_locking(
z
Variable_4/Adam/readIdentityVariable_4/Adam*
T0*
_class
loc:@Variable_4*
_output_shapes
:	x
_
zeros_14Const*
valueB	x*    *
dtype0*
_output_shapes
:	x
¤
Variable_4/Adam_1Variable*
shared_name *
_class
loc:@Variable_4*
	container *
shape:	x*
dtype0*
_output_shapes
:	x
ą
Variable_4/Adam_1/AssignAssignVariable_4/Adam_1zeros_14*
use_locking(*
T0*
_class
loc:@Variable_4*
validate_shape(*
_output_shapes
:	x
~
Variable_4/Adam_1/readIdentityVariable_4/Adam_1*
T0*
_class
loc:@Variable_4*
_output_shapes
:	x
U
zeros_15Const*
dtype0*
_output_shapes
:x*
valueBx*    

Variable_5/AdamVariable*
shared_name *
_class
loc:@Variable_5*
	container *
shape:x*
dtype0*
_output_shapes
:x
¨
Variable_5/Adam/AssignAssignVariable_5/Adamzeros_15*
use_locking(*
T0*
_class
loc:@Variable_5*
validate_shape(*
_output_shapes
:x
u
Variable_5/Adam/readIdentityVariable_5/Adam*
T0*
_class
loc:@Variable_5*
_output_shapes
:x
U
zeros_16Const*
valueBx*    *
dtype0*
_output_shapes
:x

Variable_5/Adam_1Variable*
shape:x*
dtype0*
_output_shapes
:x*
shared_name *
_class
loc:@Variable_5*
	container 
Ź
Variable_5/Adam_1/AssignAssignVariable_5/Adam_1zeros_16*
validate_shape(*
_output_shapes
:x*
use_locking(*
T0*
_class
loc:@Variable_5
y
Variable_5/Adam_1/readIdentityVariable_5/Adam_1*
_output_shapes
:x*
T0*
_class
loc:@Variable_5
]
zeros_17Const*
valueBxT*    *
dtype0*
_output_shapes

:xT
 
Variable_6/AdamVariable*
shared_name *
_class
loc:@Variable_6*
	container *
shape
:xT*
dtype0*
_output_shapes

:xT
Ź
Variable_6/Adam/AssignAssignVariable_6/Adamzeros_17*
_class
loc:@Variable_6*
validate_shape(*
_output_shapes

:xT*
use_locking(*
T0
y
Variable_6/Adam/readIdentityVariable_6/Adam*
_output_shapes

:xT*
T0*
_class
loc:@Variable_6
]
zeros_18Const*
valueBxT*    *
dtype0*
_output_shapes

:xT
˘
Variable_6/Adam_1Variable*
shared_name *
_class
loc:@Variable_6*
	container *
shape
:xT*
dtype0*
_output_shapes

:xT
°
Variable_6/Adam_1/AssignAssignVariable_6/Adam_1zeros_18*
_class
loc:@Variable_6*
validate_shape(*
_output_shapes

:xT*
use_locking(*
T0
}
Variable_6/Adam_1/readIdentityVariable_6/Adam_1*
T0*
_class
loc:@Variable_6*
_output_shapes

:xT
U
zeros_19Const*
valueBT*    *
dtype0*
_output_shapes
:T

Variable_7/AdamVariable*
shared_name *
_class
loc:@Variable_7*
	container *
shape:T*
dtype0*
_output_shapes
:T
¨
Variable_7/Adam/AssignAssignVariable_7/Adamzeros_19*
_class
loc:@Variable_7*
validate_shape(*
_output_shapes
:T*
use_locking(*
T0
u
Variable_7/Adam/readIdentityVariable_7/Adam*
T0*
_class
loc:@Variable_7*
_output_shapes
:T
U
zeros_20Const*
valueBT*    *
dtype0*
_output_shapes
:T

Variable_7/Adam_1Variable*
shared_name *
_class
loc:@Variable_7*
	container *
shape:T*
dtype0*
_output_shapes
:T
Ź
Variable_7/Adam_1/AssignAssignVariable_7/Adam_1zeros_20*
use_locking(*
T0*
_class
loc:@Variable_7*
validate_shape(*
_output_shapes
:T
y
Variable_7/Adam_1/readIdentityVariable_7/Adam_1*
T0*
_class
loc:@Variable_7*
_output_shapes
:T
]
zeros_21Const*
valueBT+*    *
dtype0*
_output_shapes

:T+
 
Variable_8/AdamVariable*
dtype0*
_output_shapes

:T+*
shared_name *
_class
loc:@Variable_8*
	container *
shape
:T+
Ź
Variable_8/Adam/AssignAssignVariable_8/Adamzeros_21*
use_locking(*
T0*
_class
loc:@Variable_8*
validate_shape(*
_output_shapes

:T+
y
Variable_8/Adam/readIdentityVariable_8/Adam*
_output_shapes

:T+*
T0*
_class
loc:@Variable_8
]
zeros_22Const*
valueBT+*    *
dtype0*
_output_shapes

:T+
˘
Variable_8/Adam_1Variable*
shape
:T+*
dtype0*
_output_shapes

:T+*
shared_name *
_class
loc:@Variable_8*
	container 
°
Variable_8/Adam_1/AssignAssignVariable_8/Adam_1zeros_22*
use_locking(*
T0*
_class
loc:@Variable_8*
validate_shape(*
_output_shapes

:T+
}
Variable_8/Adam_1/readIdentityVariable_8/Adam_1*
_class
loc:@Variable_8*
_output_shapes

:T+*
T0
U
zeros_23Const*
valueB+*    *
dtype0*
_output_shapes
:+

Variable_9/AdamVariable*
dtype0*
_output_shapes
:+*
shared_name *
_class
loc:@Variable_9*
	container *
shape:+
¨
Variable_9/Adam/AssignAssignVariable_9/Adamzeros_23*
use_locking(*
T0*
_class
loc:@Variable_9*
validate_shape(*
_output_shapes
:+
u
Variable_9/Adam/readIdentityVariable_9/Adam*
T0*
_class
loc:@Variable_9*
_output_shapes
:+
U
zeros_24Const*
valueB+*    *
dtype0*
_output_shapes
:+

Variable_9/Adam_1Variable*
dtype0*
_output_shapes
:+*
shared_name *
_class
loc:@Variable_9*
	container *
shape:+
Ź
Variable_9/Adam_1/AssignAssignVariable_9/Adam_1zeros_24*
validate_shape(*
_output_shapes
:+*
use_locking(*
T0*
_class
loc:@Variable_9
y
Variable_9/Adam_1/readIdentityVariable_9/Adam_1*
_class
loc:@Variable_9*
_output_shapes
:+*
T0
W
Adam/learning_rateConst*
valueB
 *o:*
dtype0*
_output_shapes
: 
O

Adam/beta1Const*
valueB
 *fff?*
dtype0*
_output_shapes
: 
O

Adam/beta2Const*
valueB
 *wž?*
dtype0*
_output_shapes
: 
Q
Adam/epsilonConst*
valueB
 *wĚ+2*
dtype0*
_output_shapes
: 
Ć
Adam/update_Variable/ApplyAdam	ApplyAdamVariableVariable/AdamVariable/Adam_1beta1_power/readbeta2_power/readAdam/learning_rate
Adam/beta1
Adam/beta2Adam/epsilon0gradients/Conv2D_grad/tuple/control_dependency_1*&
_output_shapes
:*
use_locking( *
T0*
_class
loc:@Variable
Á
 Adam/update_Variable_1/ApplyAdam	ApplyAdam
Variable_1Variable_1/AdamVariable_1/Adam_1beta1_power/readbeta2_power/readAdam/learning_rate
Adam/beta1
Adam/beta2Adam/epsilon-gradients/add_grad/tuple/control_dependency_1*
T0*
_class
loc:@Variable_1*
_output_shapes
:*
use_locking( 
Ň
 Adam/update_Variable_2/ApplyAdam	ApplyAdam
Variable_2Variable_2/AdamVariable_2/Adam_1beta1_power/readbeta2_power/readAdam/learning_rate
Adam/beta1
Adam/beta2Adam/epsilon2gradients/Conv2D_1_grad/tuple/control_dependency_1*&
_output_shapes
:*
use_locking( *
T0*
_class
loc:@Variable_2
Ă
 Adam/update_Variable_3/ApplyAdam	ApplyAdam
Variable_3Variable_3/AdamVariable_3/Adam_1beta1_power/readbeta2_power/readAdam/learning_rate
Adam/beta1
Adam/beta2Adam/epsilon/gradients/add_1_grad/tuple/control_dependency_1*
use_locking( *
T0*
_class
loc:@Variable_3*
_output_shapes
:
É
 Adam/update_Variable_4/ApplyAdam	ApplyAdam
Variable_4Variable_4/AdamVariable_4/Adam_1beta1_power/readbeta2_power/readAdam/learning_rate
Adam/beta1
Adam/beta2Adam/epsilon0gradients/MatMul_grad/tuple/control_dependency_1*
_output_shapes
:	x*
use_locking( *
T0*
_class
loc:@Variable_4
Ă
 Adam/update_Variable_5/ApplyAdam	ApplyAdam
Variable_5Variable_5/AdamVariable_5/Adam_1beta1_power/readbeta2_power/readAdam/learning_rate
Adam/beta1
Adam/beta2Adam/epsilon/gradients/add_2_grad/tuple/control_dependency_1*
use_locking( *
T0*
_class
loc:@Variable_5*
_output_shapes
:x
Ę
 Adam/update_Variable_6/ApplyAdam	ApplyAdam
Variable_6Variable_6/AdamVariable_6/Adam_1beta1_power/readbeta2_power/readAdam/learning_rate
Adam/beta1
Adam/beta2Adam/epsilon2gradients/MatMul_1_grad/tuple/control_dependency_1*
_class
loc:@Variable_6*
_output_shapes

:xT*
use_locking( *
T0
Ă
 Adam/update_Variable_7/ApplyAdam	ApplyAdam
Variable_7Variable_7/AdamVariable_7/Adam_1beta1_power/readbeta2_power/readAdam/learning_rate
Adam/beta1
Adam/beta2Adam/epsilon/gradients/add_3_grad/tuple/control_dependency_1*
T0*
_class
loc:@Variable_7*
_output_shapes
:T*
use_locking( 
Ę
 Adam/update_Variable_8/ApplyAdam	ApplyAdam
Variable_8Variable_8/AdamVariable_8/Adam_1beta1_power/readbeta2_power/readAdam/learning_rate
Adam/beta1
Adam/beta2Adam/epsilon2gradients/MatMul_2_grad/tuple/control_dependency_1*
use_locking( *
T0*
_class
loc:@Variable_8*
_output_shapes

:T+
Ă
 Adam/update_Variable_9/ApplyAdam	ApplyAdam
Variable_9Variable_9/AdamVariable_9/Adam_1beta1_power/readbeta2_power/readAdam/learning_rate
Adam/beta1
Adam/beta2Adam/epsilon/gradients/add_4_grad/tuple/control_dependency_1*
_output_shapes
:+*
use_locking( *
T0*
_class
loc:@Variable_9
Ç
Adam/mulMulbeta1_power/read
Adam/beta1^Adam/update_Variable/ApplyAdam!^Adam/update_Variable_1/ApplyAdam!^Adam/update_Variable_2/ApplyAdam!^Adam/update_Variable_3/ApplyAdam!^Adam/update_Variable_4/ApplyAdam!^Adam/update_Variable_5/ApplyAdam!^Adam/update_Variable_6/ApplyAdam!^Adam/update_Variable_7/ApplyAdam!^Adam/update_Variable_8/ApplyAdam!^Adam/update_Variable_9/ApplyAdam*
_class
loc:@Variable*
_output_shapes
: *
T0

Adam/AssignAssignbeta1_powerAdam/mul*
T0*
_class
loc:@Variable*
validate_shape(*
_output_shapes
: *
use_locking( 
É

Adam/mul_1Mulbeta2_power/read
Adam/beta2^Adam/update_Variable/ApplyAdam!^Adam/update_Variable_1/ApplyAdam!^Adam/update_Variable_2/ApplyAdam!^Adam/update_Variable_3/ApplyAdam!^Adam/update_Variable_4/ApplyAdam!^Adam/update_Variable_5/ApplyAdam!^Adam/update_Variable_6/ApplyAdam!^Adam/update_Variable_7/ApplyAdam!^Adam/update_Variable_8/ApplyAdam!^Adam/update_Variable_9/ApplyAdam*
T0*
_class
loc:@Variable*
_output_shapes
: 

Adam/Assign_1Assignbeta2_power
Adam/mul_1*
use_locking( *
T0*
_class
loc:@Variable*
validate_shape(*
_output_shapes
: 

AdamNoOp^Adam/update_Variable/ApplyAdam!^Adam/update_Variable_1/ApplyAdam!^Adam/update_Variable_2/ApplyAdam!^Adam/update_Variable_3/ApplyAdam!^Adam/update_Variable_4/ApplyAdam!^Adam/update_Variable_5/ApplyAdam!^Adam/update_Variable_6/ApplyAdam!^Adam/update_Variable_7/ApplyAdam!^Adam/update_Variable_8/ApplyAdam!^Adam/update_Variable_9/ApplyAdam^Adam/Assign^Adam/Assign_1
R
ArgMax/dimensionConst*
value	B :*
dtype0*
_output_shapes
: 
c
ArgMaxArgMaxadd_4ArgMax/dimension*
T0*#
_output_shapes
:˙˙˙˙˙˙˙˙˙*

Tidx0
T
ArgMax_1/dimensionConst*
value	B :*
dtype0*
_output_shapes
: 
^
ArgMax_1ArgMaxone_hotArgMax_1/dimension*
_output_shapes
:*

Tidx0*
T0
C
EqualEqualArgMaxArgMax_1*
T0	*
_output_shapes
:
G
Cast_1CastEqual*

SrcT0
*
_output_shapes
:*

DstT0
7
Rank_3RankCast_1*
T0*
_output_shapes
: 
M
range/startConst*
value	B : *
dtype0*
_output_shapes
: 
M
range/deltaConst*
value	B :*
dtype0*
_output_shapes
: 
a
rangeRangerange/startRank_3range/delta*#
_output_shapes
:˙˙˙˙˙˙˙˙˙*

Tidx0
]
Mean_1MeanCast_1range*

Tidx0*
	keep_dims( *
T0*
_output_shapes
:
P

save/ConstConst*
valueB Bmodel*
dtype0*
_output_shapes
: 
Ö
save/SaveV2/tensor_namesConst*
value˙Bü BVariableBVariable/AdamBVariable/Adam_1B
Variable_1BVariable_1/AdamBVariable_1/Adam_1B
Variable_2BVariable_2/AdamBVariable_2/Adam_1B
Variable_3BVariable_3/AdamBVariable_3/Adam_1B
Variable_4BVariable_4/AdamBVariable_4/Adam_1B
Variable_5BVariable_5/AdamBVariable_5/Adam_1B
Variable_6BVariable_6/AdamBVariable_6/Adam_1B
Variable_7BVariable_7/AdamBVariable_7/Adam_1B
Variable_8BVariable_8/AdamBVariable_8/Adam_1B
Variable_9BVariable_9/AdamBVariable_9/Adam_1Bbeta1_powerBbeta2_power*
dtype0*
_output_shapes
: 
Ł
save/SaveV2/shape_and_slicesConst*
dtype0*
_output_shapes
: *S
valueJBH B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B B 
ý
save/SaveV2SaveV2
save/Constsave/SaveV2/tensor_namessave/SaveV2/shape_and_slicesVariableVariable/AdamVariable/Adam_1
Variable_1Variable_1/AdamVariable_1/Adam_1
Variable_2Variable_2/AdamVariable_2/Adam_1
Variable_3Variable_3/AdamVariable_3/Adam_1
Variable_4Variable_4/AdamVariable_4/Adam_1
Variable_5Variable_5/AdamVariable_5/Adam_1
Variable_6Variable_6/AdamVariable_6/Adam_1
Variable_7Variable_7/AdamVariable_7/Adam_1
Variable_8Variable_8/AdamVariable_8/Adam_1
Variable_9Variable_9/AdamVariable_9/Adam_1beta1_powerbeta2_power*.
dtypes$
"2 
}
save/control_dependencyIdentity
save/Const^save/SaveV2*
T0*
_class
loc:@save/Const*
_output_shapes
: 
l
save/RestoreV2/tensor_namesConst*
valueBBVariable*
dtype0*
_output_shapes
:
h
save/RestoreV2/shape_and_slicesConst*
dtype0*
_output_shapes
:*
valueB
B 

save/RestoreV2	RestoreV2
save/Constsave/RestoreV2/tensor_namessave/RestoreV2/shape_and_slices*
_output_shapes
:*
dtypes
2
Ś
save/AssignAssignVariablesave/RestoreV2*
use_locking(*
T0*
_class
loc:@Variable*
validate_shape(*&
_output_shapes
:
s
save/RestoreV2_1/tensor_namesConst*"
valueBBVariable/Adam*
dtype0*
_output_shapes
:
j
!save/RestoreV2_1/shape_and_slicesConst*
valueB
B *
dtype0*
_output_shapes
:

save/RestoreV2_1	RestoreV2
save/Constsave/RestoreV2_1/tensor_names!save/RestoreV2_1/shape_and_slices*
_output_shapes
:*
dtypes
2
Ż
save/Assign_1AssignVariable/Adamsave/RestoreV2_1*
T0*
_class
loc:@Variable*
validate_shape(*&
_output_shapes
:*
use_locking(
u
save/RestoreV2_2/tensor_namesConst*$
valueBBVariable/Adam_1*
dtype0*
_output_shapes
:
j
!save/RestoreV2_2/shape_and_slicesConst*
_output_shapes
:*
valueB
B *
dtype0

save/RestoreV2_2	RestoreV2
save/Constsave/RestoreV2_2/tensor_names!save/RestoreV2_2/shape_and_slices*
_output_shapes
:*
dtypes
2
ą
save/Assign_2AssignVariable/Adam_1save/RestoreV2_2*
use_locking(*
T0*
_class
loc:@Variable*
validate_shape(*&
_output_shapes
:
p
save/RestoreV2_3/tensor_namesConst*
valueBB
Variable_1*
dtype0*
_output_shapes
:
j
!save/RestoreV2_3/shape_and_slicesConst*
valueB
B *
dtype0*
_output_shapes
:

save/RestoreV2_3	RestoreV2
save/Constsave/RestoreV2_3/tensor_names!save/RestoreV2_3/shape_and_slices*
dtypes
2*
_output_shapes
:
˘
save/Assign_3Assign
Variable_1save/RestoreV2_3*
use_locking(*
T0*
_class
loc:@Variable_1*
validate_shape(*
_output_shapes
:
u
save/RestoreV2_4/tensor_namesConst*$
valueBBVariable_1/Adam*
dtype0*
_output_shapes
:
j
!save/RestoreV2_4/shape_and_slicesConst*
valueB
B *
dtype0*
_output_shapes
:

save/RestoreV2_4	RestoreV2
save/Constsave/RestoreV2_4/tensor_names!save/RestoreV2_4/shape_and_slices*
_output_shapes
:*
dtypes
2
§
save/Assign_4AssignVariable_1/Adamsave/RestoreV2_4*
use_locking(*
T0*
_class
loc:@Variable_1*
validate_shape(*
_output_shapes
:
w
save/RestoreV2_5/tensor_namesConst*&
valueBBVariable_1/Adam_1*
dtype0*
_output_shapes
:
j
!save/RestoreV2_5/shape_and_slicesConst*
valueB
B *
dtype0*
_output_shapes
:

save/RestoreV2_5	RestoreV2
save/Constsave/RestoreV2_5/tensor_names!save/RestoreV2_5/shape_and_slices*
_output_shapes
:*
dtypes
2
Š
save/Assign_5AssignVariable_1/Adam_1save/RestoreV2_5*
use_locking(*
T0*
_class
loc:@Variable_1*
validate_shape(*
_output_shapes
:
p
save/RestoreV2_6/tensor_namesConst*
valueBB
Variable_2*
dtype0*
_output_shapes
:
j
!save/RestoreV2_6/shape_and_slicesConst*
valueB
B *
dtype0*
_output_shapes
:

save/RestoreV2_6	RestoreV2
save/Constsave/RestoreV2_6/tensor_names!save/RestoreV2_6/shape_and_slices*
_output_shapes
:*
dtypes
2
Ž
save/Assign_6Assign
Variable_2save/RestoreV2_6*
T0*
_class
loc:@Variable_2*
validate_shape(*&
_output_shapes
:*
use_locking(
u
save/RestoreV2_7/tensor_namesConst*$
valueBBVariable_2/Adam*
dtype0*
_output_shapes
:
j
!save/RestoreV2_7/shape_and_slicesConst*
valueB
B *
dtype0*
_output_shapes
:

save/RestoreV2_7	RestoreV2
save/Constsave/RestoreV2_7/tensor_names!save/RestoreV2_7/shape_and_slices*
_output_shapes
:*
dtypes
2
ł
save/Assign_7AssignVariable_2/Adamsave/RestoreV2_7*
use_locking(*
T0*
_class
loc:@Variable_2*
validate_shape(*&
_output_shapes
:
w
save/RestoreV2_8/tensor_namesConst*
_output_shapes
:*&
valueBBVariable_2/Adam_1*
dtype0
j
!save/RestoreV2_8/shape_and_slicesConst*
valueB
B *
dtype0*
_output_shapes
:

save/RestoreV2_8	RestoreV2
save/Constsave/RestoreV2_8/tensor_names!save/RestoreV2_8/shape_and_slices*
_output_shapes
:*
dtypes
2
ľ
save/Assign_8AssignVariable_2/Adam_1save/RestoreV2_8*
use_locking(*
T0*
_class
loc:@Variable_2*
validate_shape(*&
_output_shapes
:
p
save/RestoreV2_9/tensor_namesConst*
dtype0*
_output_shapes
:*
valueBB
Variable_3
j
!save/RestoreV2_9/shape_and_slicesConst*
valueB
B *
dtype0*
_output_shapes
:

save/RestoreV2_9	RestoreV2
save/Constsave/RestoreV2_9/tensor_names!save/RestoreV2_9/shape_and_slices*
_output_shapes
:*
dtypes
2
˘
save/Assign_9Assign
Variable_3save/RestoreV2_9*
use_locking(*
T0*
_class
loc:@Variable_3*
validate_shape(*
_output_shapes
:
v
save/RestoreV2_10/tensor_namesConst*$
valueBBVariable_3/Adam*
dtype0*
_output_shapes
:
k
"save/RestoreV2_10/shape_and_slicesConst*
valueB
B *
dtype0*
_output_shapes
:

save/RestoreV2_10	RestoreV2
save/Constsave/RestoreV2_10/tensor_names"save/RestoreV2_10/shape_and_slices*
_output_shapes
:*
dtypes
2
Š
save/Assign_10AssignVariable_3/Adamsave/RestoreV2_10*
validate_shape(*
_output_shapes
:*
use_locking(*
T0*
_class
loc:@Variable_3
x
save/RestoreV2_11/tensor_namesConst*&
valueBBVariable_3/Adam_1*
dtype0*
_output_shapes
:
k
"save/RestoreV2_11/shape_and_slicesConst*
dtype0*
_output_shapes
:*
valueB
B 

save/RestoreV2_11	RestoreV2
save/Constsave/RestoreV2_11/tensor_names"save/RestoreV2_11/shape_and_slices*
dtypes
2*
_output_shapes
:
Ť
save/Assign_11AssignVariable_3/Adam_1save/RestoreV2_11*
use_locking(*
T0*
_class
loc:@Variable_3*
validate_shape(*
_output_shapes
:
q
save/RestoreV2_12/tensor_namesConst*
_output_shapes
:*
valueBB
Variable_4*
dtype0
k
"save/RestoreV2_12/shape_and_slicesConst*
valueB
B *
dtype0*
_output_shapes
:

save/RestoreV2_12	RestoreV2
save/Constsave/RestoreV2_12/tensor_names"save/RestoreV2_12/shape_and_slices*
_output_shapes
:*
dtypes
2
Š
save/Assign_12Assign
Variable_4save/RestoreV2_12*
T0*
_class
loc:@Variable_4*
validate_shape(*
_output_shapes
:	x*
use_locking(
v
save/RestoreV2_13/tensor_namesConst*
dtype0*
_output_shapes
:*$
valueBBVariable_4/Adam
k
"save/RestoreV2_13/shape_and_slicesConst*
valueB
B *
dtype0*
_output_shapes
:

save/RestoreV2_13	RestoreV2
save/Constsave/RestoreV2_13/tensor_names"save/RestoreV2_13/shape_and_slices*
_output_shapes
:*
dtypes
2
Ž
save/Assign_13AssignVariable_4/Adamsave/RestoreV2_13*
use_locking(*
T0*
_class
loc:@Variable_4*
validate_shape(*
_output_shapes
:	x
x
save/RestoreV2_14/tensor_namesConst*&
valueBBVariable_4/Adam_1*
dtype0*
_output_shapes
:
k
"save/RestoreV2_14/shape_and_slicesConst*
valueB
B *
dtype0*
_output_shapes
:

save/RestoreV2_14	RestoreV2
save/Constsave/RestoreV2_14/tensor_names"save/RestoreV2_14/shape_and_slices*
_output_shapes
:*
dtypes
2
°
save/Assign_14AssignVariable_4/Adam_1save/RestoreV2_14*
use_locking(*
T0*
_class
loc:@Variable_4*
validate_shape(*
_output_shapes
:	x
q
save/RestoreV2_15/tensor_namesConst*
valueBB
Variable_5*
dtype0*
_output_shapes
:
k
"save/RestoreV2_15/shape_and_slicesConst*
valueB
B *
dtype0*
_output_shapes
:

save/RestoreV2_15	RestoreV2
save/Constsave/RestoreV2_15/tensor_names"save/RestoreV2_15/shape_and_slices*
dtypes
2*
_output_shapes
:
¤
save/Assign_15Assign
Variable_5save/RestoreV2_15*
use_locking(*
T0*
_class
loc:@Variable_5*
validate_shape(*
_output_shapes
:x
v
save/RestoreV2_16/tensor_namesConst*$
valueBBVariable_5/Adam*
dtype0*
_output_shapes
:
k
"save/RestoreV2_16/shape_and_slicesConst*
valueB
B *
dtype0*
_output_shapes
:

save/RestoreV2_16	RestoreV2
save/Constsave/RestoreV2_16/tensor_names"save/RestoreV2_16/shape_and_slices*
_output_shapes
:*
dtypes
2
Š
save/Assign_16AssignVariable_5/Adamsave/RestoreV2_16*
use_locking(*
T0*
_class
loc:@Variable_5*
validate_shape(*
_output_shapes
:x
x
save/RestoreV2_17/tensor_namesConst*&
valueBBVariable_5/Adam_1*
dtype0*
_output_shapes
:
k
"save/RestoreV2_17/shape_and_slicesConst*
valueB
B *
dtype0*
_output_shapes
:

save/RestoreV2_17	RestoreV2
save/Constsave/RestoreV2_17/tensor_names"save/RestoreV2_17/shape_and_slices*
_output_shapes
:*
dtypes
2
Ť
save/Assign_17AssignVariable_5/Adam_1save/RestoreV2_17*
use_locking(*
T0*
_class
loc:@Variable_5*
validate_shape(*
_output_shapes
:x
q
save/RestoreV2_18/tensor_namesConst*
dtype0*
_output_shapes
:*
valueBB
Variable_6
k
"save/RestoreV2_18/shape_and_slicesConst*
valueB
B *
dtype0*
_output_shapes
:

save/RestoreV2_18	RestoreV2
save/Constsave/RestoreV2_18/tensor_names"save/RestoreV2_18/shape_and_slices*
_output_shapes
:*
dtypes
2
¨
save/Assign_18Assign
Variable_6save/RestoreV2_18*
T0*
_class
loc:@Variable_6*
validate_shape(*
_output_shapes

:xT*
use_locking(
v
save/RestoreV2_19/tensor_namesConst*$
valueBBVariable_6/Adam*
dtype0*
_output_shapes
:
k
"save/RestoreV2_19/shape_and_slicesConst*
valueB
B *
dtype0*
_output_shapes
:

save/RestoreV2_19	RestoreV2
save/Constsave/RestoreV2_19/tensor_names"save/RestoreV2_19/shape_and_slices*
_output_shapes
:*
dtypes
2
­
save/Assign_19AssignVariable_6/Adamsave/RestoreV2_19*
use_locking(*
T0*
_class
loc:@Variable_6*
validate_shape(*
_output_shapes

:xT
x
save/RestoreV2_20/tensor_namesConst*&
valueBBVariable_6/Adam_1*
dtype0*
_output_shapes
:
k
"save/RestoreV2_20/shape_and_slicesConst*
valueB
B *
dtype0*
_output_shapes
:

save/RestoreV2_20	RestoreV2
save/Constsave/RestoreV2_20/tensor_names"save/RestoreV2_20/shape_and_slices*
_output_shapes
:*
dtypes
2
Ż
save/Assign_20AssignVariable_6/Adam_1save/RestoreV2_20*
use_locking(*
T0*
_class
loc:@Variable_6*
validate_shape(*
_output_shapes

:xT
q
save/RestoreV2_21/tensor_namesConst*
valueBB
Variable_7*
dtype0*
_output_shapes
:
k
"save/RestoreV2_21/shape_and_slicesConst*
valueB
B *
dtype0*
_output_shapes
:

save/RestoreV2_21	RestoreV2
save/Constsave/RestoreV2_21/tensor_names"save/RestoreV2_21/shape_and_slices*
_output_shapes
:*
dtypes
2
¤
save/Assign_21Assign
Variable_7save/RestoreV2_21*
use_locking(*
T0*
_class
loc:@Variable_7*
validate_shape(*
_output_shapes
:T
v
save/RestoreV2_22/tensor_namesConst*
dtype0*
_output_shapes
:*$
valueBBVariable_7/Adam
k
"save/RestoreV2_22/shape_and_slicesConst*
valueB
B *
dtype0*
_output_shapes
:

save/RestoreV2_22	RestoreV2
save/Constsave/RestoreV2_22/tensor_names"save/RestoreV2_22/shape_and_slices*
_output_shapes
:*
dtypes
2
Š
save/Assign_22AssignVariable_7/Adamsave/RestoreV2_22*
_output_shapes
:T*
use_locking(*
T0*
_class
loc:@Variable_7*
validate_shape(
x
save/RestoreV2_23/tensor_namesConst*
dtype0*
_output_shapes
:*&
valueBBVariable_7/Adam_1
k
"save/RestoreV2_23/shape_and_slicesConst*
dtype0*
_output_shapes
:*
valueB
B 

save/RestoreV2_23	RestoreV2
save/Constsave/RestoreV2_23/tensor_names"save/RestoreV2_23/shape_and_slices*
_output_shapes
:*
dtypes
2
Ť
save/Assign_23AssignVariable_7/Adam_1save/RestoreV2_23*
validate_shape(*
_output_shapes
:T*
use_locking(*
T0*
_class
loc:@Variable_7
q
save/RestoreV2_24/tensor_namesConst*
valueBB
Variable_8*
dtype0*
_output_shapes
:
k
"save/RestoreV2_24/shape_and_slicesConst*
valueB
B *
dtype0*
_output_shapes
:

save/RestoreV2_24	RestoreV2
save/Constsave/RestoreV2_24/tensor_names"save/RestoreV2_24/shape_and_slices*
_output_shapes
:*
dtypes
2
¨
save/Assign_24Assign
Variable_8save/RestoreV2_24*
T0*
_class
loc:@Variable_8*
validate_shape(*
_output_shapes

:T+*
use_locking(
v
save/RestoreV2_25/tensor_namesConst*
_output_shapes
:*$
valueBBVariable_8/Adam*
dtype0
k
"save/RestoreV2_25/shape_and_slicesConst*
valueB
B *
dtype0*
_output_shapes
:

save/RestoreV2_25	RestoreV2
save/Constsave/RestoreV2_25/tensor_names"save/RestoreV2_25/shape_and_slices*
_output_shapes
:*
dtypes
2
­
save/Assign_25AssignVariable_8/Adamsave/RestoreV2_25*
use_locking(*
T0*
_class
loc:@Variable_8*
validate_shape(*
_output_shapes

:T+
x
save/RestoreV2_26/tensor_namesConst*&
valueBBVariable_8/Adam_1*
dtype0*
_output_shapes
:
k
"save/RestoreV2_26/shape_and_slicesConst*
valueB
B *
dtype0*
_output_shapes
:

save/RestoreV2_26	RestoreV2
save/Constsave/RestoreV2_26/tensor_names"save/RestoreV2_26/shape_and_slices*
_output_shapes
:*
dtypes
2
Ż
save/Assign_26AssignVariable_8/Adam_1save/RestoreV2_26*
use_locking(*
T0*
_class
loc:@Variable_8*
validate_shape(*
_output_shapes

:T+
q
save/RestoreV2_27/tensor_namesConst*
valueBB
Variable_9*
dtype0*
_output_shapes
:
k
"save/RestoreV2_27/shape_and_slicesConst*
valueB
B *
dtype0*
_output_shapes
:

save/RestoreV2_27	RestoreV2
save/Constsave/RestoreV2_27/tensor_names"save/RestoreV2_27/shape_and_slices*
dtypes
2*
_output_shapes
:
¤
save/Assign_27Assign
Variable_9save/RestoreV2_27*
T0*
_class
loc:@Variable_9*
validate_shape(*
_output_shapes
:+*
use_locking(
v
save/RestoreV2_28/tensor_namesConst*$
valueBBVariable_9/Adam*
dtype0*
_output_shapes
:
k
"save/RestoreV2_28/shape_and_slicesConst*
valueB
B *
dtype0*
_output_shapes
:

save/RestoreV2_28	RestoreV2
save/Constsave/RestoreV2_28/tensor_names"save/RestoreV2_28/shape_and_slices*
dtypes
2*
_output_shapes
:
Š
save/Assign_28AssignVariable_9/Adamsave/RestoreV2_28*
use_locking(*
T0*
_class
loc:@Variable_9*
validate_shape(*
_output_shapes
:+
x
save/RestoreV2_29/tensor_namesConst*&
valueBBVariable_9/Adam_1*
dtype0*
_output_shapes
:
k
"save/RestoreV2_29/shape_and_slicesConst*
valueB
B *
dtype0*
_output_shapes
:

save/RestoreV2_29	RestoreV2
save/Constsave/RestoreV2_29/tensor_names"save/RestoreV2_29/shape_and_slices*
dtypes
2*
_output_shapes
:
Ť
save/Assign_29AssignVariable_9/Adam_1save/RestoreV2_29*
_class
loc:@Variable_9*
validate_shape(*
_output_shapes
:+*
use_locking(*
T0
r
save/RestoreV2_30/tensor_namesConst* 
valueBBbeta1_power*
dtype0*
_output_shapes
:
k
"save/RestoreV2_30/shape_and_slicesConst*
_output_shapes
:*
valueB
B *
dtype0

save/RestoreV2_30	RestoreV2
save/Constsave/RestoreV2_30/tensor_names"save/RestoreV2_30/shape_and_slices*
dtypes
2*
_output_shapes
:

save/Assign_30Assignbeta1_powersave/RestoreV2_30*
_output_shapes
: *
use_locking(*
T0*
_class
loc:@Variable*
validate_shape(
r
save/RestoreV2_31/tensor_namesConst* 
valueBBbeta2_power*
dtype0*
_output_shapes
:
k
"save/RestoreV2_31/shape_and_slicesConst*
valueB
B *
dtype0*
_output_shapes
:

save/RestoreV2_31	RestoreV2
save/Constsave/RestoreV2_31/tensor_names"save/RestoreV2_31/shape_and_slices*
dtypes
2*
_output_shapes
:

save/Assign_31Assignbeta2_powersave/RestoreV2_31*
use_locking(*
T0*
_class
loc:@Variable*
validate_shape(*
_output_shapes
: 
Ź
save/restore_allNoOp^save/Assign^save/Assign_1^save/Assign_2^save/Assign_3^save/Assign_4^save/Assign_5^save/Assign_6^save/Assign_7^save/Assign_8^save/Assign_9^save/Assign_10^save/Assign_11^save/Assign_12^save/Assign_13^save/Assign_14^save/Assign_15^save/Assign_16^save/Assign_17^save/Assign_18^save/Assign_19^save/Assign_20^save/Assign_21^save/Assign_22^save/Assign_23^save/Assign_24^save/Assign_25^save/Assign_26^save/Assign_27^save/Assign_28^save/Assign_29^save/Assign_30^save/Assign_31

initNoOp^Variable/Assign^Variable_1/Assign^Variable_2/Assign^Variable_3/Assign^Variable_4/Assign^Variable_5/Assign^Variable_6/Assign^Variable_7/Assign^Variable_8/Assign^Variable_9/Assign^beta1_power/Assign^beta2_power/Assign^Variable/Adam/Assign^Variable/Adam_1/Assign^Variable_1/Adam/Assign^Variable_1/Adam_1/Assign^Variable_2/Adam/Assign^Variable_2/Adam_1/Assign^Variable_3/Adam/Assign^Variable_3/Adam_1/Assign^Variable_4/Adam/Assign^Variable_4/Adam_1/Assign^Variable_5/Adam/Assign^Variable_5/Adam_1/Assign^Variable_6/Adam/Assign^Variable_6/Adam_1/Assign^Variable_7/Adam/Assign^Variable_7/Adam_1/Assign^Variable_8/Adam/Assign^Variable_8/Adam_1/Assign^Variable_9/Adam/Assign^Variable_9/Adam_1/Assign"D
save/Const:0save/control_dependency:0save/restore_all 5 @F8"ą
trainable_variables
.

Variable:0Variable/AssignVariable/read:0
4
Variable_1:0Variable_1/AssignVariable_1/read:0
4
Variable_2:0Variable_2/AssignVariable_2/read:0
4
Variable_3:0Variable_3/AssignVariable_3/read:0
4
Variable_4:0Variable_4/AssignVariable_4/read:0
4
Variable_5:0Variable_5/AssignVariable_5/read:0
4
Variable_6:0Variable_6/AssignVariable_6/read:0
4
Variable_7:0Variable_7/AssignVariable_7/read:0
4
Variable_8:0Variable_8/AssignVariable_8/read:0
4
Variable_9:0Variable_9/AssignVariable_9/read:0"
train_op

Adam"­
	variables
.

Variable:0Variable/AssignVariable/read:0
4
Variable_1:0Variable_1/AssignVariable_1/read:0
4
Variable_2:0Variable_2/AssignVariable_2/read:0
4
Variable_3:0Variable_3/AssignVariable_3/read:0
4
Variable_4:0Variable_4/AssignVariable_4/read:0
4
Variable_5:0Variable_5/AssignVariable_5/read:0
4
Variable_6:0Variable_6/AssignVariable_6/read:0
4
Variable_7:0Variable_7/AssignVariable_7/read:0
4
Variable_8:0Variable_8/AssignVariable_8/read:0
4
Variable_9:0Variable_9/AssignVariable_9/read:0
7
beta1_power:0beta1_power/Assignbeta1_power/read:0
7
beta2_power:0beta2_power/Assignbeta2_power/read:0
=
Variable/Adam:0Variable/Adam/AssignVariable/Adam/read:0
C
Variable/Adam_1:0Variable/Adam_1/AssignVariable/Adam_1/read:0
C
Variable_1/Adam:0Variable_1/Adam/AssignVariable_1/Adam/read:0
I
Variable_1/Adam_1:0Variable_1/Adam_1/AssignVariable_1/Adam_1/read:0
C
Variable_2/Adam:0Variable_2/Adam/AssignVariable_2/Adam/read:0
I
Variable_2/Adam_1:0Variable_2/Adam_1/AssignVariable_2/Adam_1/read:0
C
Variable_3/Adam:0Variable_3/Adam/AssignVariable_3/Adam/read:0
I
Variable_3/Adam_1:0Variable_3/Adam_1/AssignVariable_3/Adam_1/read:0
C
Variable_4/Adam:0Variable_4/Adam/AssignVariable_4/Adam/read:0
I
Variable_4/Adam_1:0Variable_4/Adam_1/AssignVariable_4/Adam_1/read:0
C
Variable_5/Adam:0Variable_5/Adam/AssignVariable_5/Adam/read:0
I
Variable_5/Adam_1:0Variable_5/Adam_1/AssignVariable_5/Adam_1/read:0
C
Variable_6/Adam:0Variable_6/Adam/AssignVariable_6/Adam/read:0
I
Variable_6/Adam_1:0Variable_6/Adam_1/AssignVariable_6/Adam_1/read:0
C
Variable_7/Adam:0Variable_7/Adam/AssignVariable_7/Adam/read:0
I
Variable_7/Adam_1:0Variable_7/Adam_1/AssignVariable_7/Adam_1/read:0
C
Variable_8/Adam:0Variable_8/Adam/AssignVariable_8/Adam/read:0
I
Variable_8/Adam_1:0Variable_8/Adam_1/AssignVariable_8/Adam_1/read:0
C
Variable_9/Adam:0Variable_9/Adam/AssignVariable_9/Adam/read:0
I
Variable_9/Adam_1:0Variable_9/Adam_1/AssignVariable_9/Adam_1/read:0